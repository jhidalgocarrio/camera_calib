rock_library(camera_calib
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(camera_calib_bin Main.cpp
    DEPS camera_calib)

