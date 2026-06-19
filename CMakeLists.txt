cmake_minimum_required(VERSION 3.16)

project(QuizApplication VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

set(PROJECT_SOURCES
        main.cpp
        forms/loginwindow.cpp
        forms/loginwindow.h
        forms/loginwindow.ui

        forms/dashboard.cpp
        forms/dashboard.h
        forms/dashboard.ui

        forms/questionmanager.cpp
        forms/questionmanager.h
        forms/questionmanager.ui

        forms/viewquestions.cpp
        forms/viewquestions.h
        forms/viewquestions.ui

        forms/editquestion.cpp
        forms/editquestion.h
        forms/editquestion.ui

        forms/quizwindow.cpp
        forms/quizwindow.h
        forms/quizwindow.ui

        forms/resultwindow.cpp
        forms/resultwindow.h
        forms/resultwindow.ui

        database/databasemanager.cpp
        database/databasemanager.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(QuizApplication
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        database/databasemanager.h
        database/databasemanager.cpp
        forms/loginwindow.h forms/loginwindow.cpp forms/loginwindow.ui
        forms/dashboard.h forms/dashboard.cpp forms/dashboard.ui
        forms/questionmanager.h forms/questionmanager.cpp forms/questionmanager.ui
        forms/viewquestions.h forms/viewquestions.cpp forms/viewquestions.ui
        forms/editquestion.h forms/editquestion.cpp forms/editquestion.ui
        forms/quizwindow.h forms/quizwindow.cpp forms/quizwindow.ui
        forms/resultwindow.h forms/resultwindow.cpp forms/resultwindow.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET QuizApplication APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(QuizApplication SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(QuizApplication
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(QuizApplication PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QuizApplication)
endif()
set_target_properties(QuizApplication PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QuizApplication
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(QuizApplication)
endif()
