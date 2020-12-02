# handy-ros-kinetic tutorial

## 1. Prerequisite
Before launching any file, please make sure following commmands are included in your ~/.bashrc:  
~~~~
$ /opt/ros/kinetic/setup.bash  
$ ~/catkin_ws/devel/setup.bash  
$ export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:/home/chao/catkin_ws/src:/opt/ros/kinetic/share    
$ export PYTHONPATH=$PYTHONPATH:/usr/lib/python2.7/dist-packages (if you have anaconda installed)  
~~~~
Then you may want to use command 
~~~~
$ source ~/.bashrc
~~~~
to activate the changes.  
During implementation of this tutorial, if any error occurs saying "cannot find dynamixel_msgs/JointState.h" or somthing similar, please install these packages from "http://wiki.ros.org/dynamixel_motor?distro=kinetic" first. Then, try "$ sudo apt-get install ros-kinetic-dynamixel-msgs".

## 2. Turn on ROS
In a new terminal, run 
~~~~
$ roscore
~~~~
to activate ROS.

## 3. Setup your controller
In a new terminal, run 
~~~~
$ roslaunch finalarm_control controller_manager.launch
~~~~
If error occurs and INFO indictaes it is caused by certain .py files. Most likely it is because this .py file is currently unexecutable. Try
~~~~
$ chmod a+x <name of your .py file>. 
~~~~
This tip also applies to next few steps.
Another common error is something like "could not open port", try 
~~~~
$ sudo chmod 666 /dev/ttyUSB0
~~~~
 
## 4. Start yourt controller
In a new terminal, run 
~~~~
$ roslaunch finalarm_control start_controller.launch
~~~~
This process will not last long, at most a few seconds. Then you will go back to "username@devicename: ~$"

## 5. Publish robot joint states
In a new terminal, run 
~~~~
$ roslaunch finalarm_description robot_state_pub.launch
~~~~

## 6. Publish arm group
In a new ternimal, run 
~~~~
$ roslaunch finalarm_moveit_config move_group.launch
~~~~

## 7. RViz for visulization
In a new terminal, run 
~~~~
$ roslaunch finalarm_moveit_config moveit_rviz.launch
~~~~

## 8. Run your code
Start a new terminal, run
~~~~
$ roslaunch <yourfolder> <yourlaunchfile>
~~~~
