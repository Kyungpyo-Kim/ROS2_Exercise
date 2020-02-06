# ROS2_Exercise

## ROS2 INSTALLATION
Installation information
* Version: ROS 2 Eloquent Elusor

* Takes ~10min

* Install the build tool Colcon
    ```
    sudo apt install python3-colcon-common-extensions
    ```


## Creating a ROS 2 package
* Goal: Create a new package using either CMake or Python, and run its executable.

* Tutorial level: Beginner

* Time: 15 minutes

* Create packages
    ```bash
    mkdir -p dev_ws/src && cd dev_ws/src
    ros2 pkg create --build-type ament_cmake --node-name dev_cpp_node dev_cpp_pkg
    ros2 pkg create --build-type ament_python --node-name dev_py_node dev_py_pkg
    cd .. && colcon build
    # colcon build --packages-select my_package
    . install/setup.bash
    ros2 run dev_cpp_pkg dev_cpp_node
    ros2 run dev_py_pkg dev_py_node

    ```

## Rviz2 Pulgin Exercise
* Empty templete [*]
```bash
cd rviz_plugin_test/
colcon build
. install/setup.bash
ros2 run rviz2 rviz2
# Panels >> Add New Panel >> MyPlugin >> OK
```
* Push button []

## Reference
#### Installation
* https://index.ros.org/doc/ros2/Installation/#installationguide
* https://index.ros.org/doc/ros2/Installation/Eloquent/Linux-Install-Debians/
* https://colcon.readthedocs.io/en/released/user/installation.html

#### Creating package
* https://index.ros.org/doc/ros2/Tutorials/Creating-A-ROS2-Package/

#### Rviz2 pulgin
* ROS Rviz tutorials: https://github.com/ros-visualization/visualization_tutorials
* ROS2 Rviz2 plugin development guide: https://github.com/ros2/rviz/blob/ros2/docs/plugin_development.md
* Rviz2 example: https://github.com/osrf/rviz_aerial_plugins