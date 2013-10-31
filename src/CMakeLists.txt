rock_executable(camera_calib_bin camera_calibration.cpp
   DEPS_PKGCONFIG base-types opencv)

rock_executable(stereo_calib_bin stereo_calibrate.cpp
   DEPS_PKGCONFIG base-types opencv)

rock_executable(orig_calib_bin orig_calib.cpp
   DEPS_PKGCONFIG base-types opencv)


