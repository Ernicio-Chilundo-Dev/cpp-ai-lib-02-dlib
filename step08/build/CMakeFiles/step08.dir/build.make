# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build

# Include any dependencies generated for this target.
include CMakeFiles/step08.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/step08.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/step08.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/step08.dir/flags.make

CMakeFiles/step08.dir/step8.cpp.o: CMakeFiles/step08.dir/flags.make
CMakeFiles/step08.dir/step8.cpp.o: /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/step8.cpp
CMakeFiles/step08.dir/step8.cpp.o: CMakeFiles/step08.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/step08.dir/step8.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/step08.dir/step8.cpp.o -MF CMakeFiles/step08.dir/step8.cpp.o.d -o CMakeFiles/step08.dir/step8.cpp.o -c /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/step8.cpp

CMakeFiles/step08.dir/step8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/step08.dir/step8.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/step8.cpp > CMakeFiles/step08.dir/step8.cpp.i

CMakeFiles/step08.dir/step8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/step08.dir/step8.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/step8.cpp -o CMakeFiles/step08.dir/step8.cpp.s

# Object files for target step08
step08_OBJECTS = \
"CMakeFiles/step08.dir/step8.cpp.o"

# External object files for target step08
step08_EXTERNAL_OBJECTS =

step08: CMakeFiles/step08.dir/step8.cpp.o
step08: CMakeFiles/step08.dir/build.make
step08: /usr/local/lib/libdlib.a
step08: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_alphamat.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_barcode.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_cvv.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_dnn_objdetect.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_dnn_superres.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_face.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_hfs.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_img_hash.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_intensity_transform.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_mcc.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_quality.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_rapid.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_tracking.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_wechat_qrcode.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopenblas.so
step08: /usr/lib/x86_64-linux-gnu/libSM.so
step08: /usr/lib/x86_64-linux-gnu/libICE.so
step08: /usr/lib/x86_64-linux-gnu/libX11.so
step08: /usr/lib/x86_64-linux-gnu/libXext.so
step08: /usr/lib/x86_64-linux-gnu/libpng.so
step08: /usr/lib/x86_64-linux-gnu/libz.so
step08: /usr/lib/x86_64-linux-gnu/libjpeg.so
step08: /usr/lib/x86_64-linux-gnu/libwebp.so
step08: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_text.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_video.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_dnn.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.4.6.0
step08: /usr/lib/x86_64-linux-gnu/libopencv_core.so.4.6.0
step08: CMakeFiles/step08.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable step08"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/step08.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/step08.dir/build: step08
.PHONY : CMakeFiles/step08.dir/build

CMakeFiles/step08.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/step08.dir/cmake_clean.cmake
.PHONY : CMakeFiles/step08.dir/clean

CMakeFiles/step08.dir/depend:
	cd /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08 /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08 /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build /home/ernicio/library-cpp-ai/cpp-ai-lib-02-dlib/step08/build/CMakeFiles/step08.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/step08.dir/depend

