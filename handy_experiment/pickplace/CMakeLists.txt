add_executable(pickplace src/pickplace.cpp)
target_link_libraries(pickplace ${catkin_LIBRARIES} ${Boost_LIBRARIES})

add_executable(pick src/pick.cpp)
target_link_libraries(pick ${catkin_LIBRARIES} ${Boost_LIBRARIES})

add_executable(place src/place.cpp)
target_link_libraries(place ${catkin_LIBRARIES} ${Boost_LIBRARIES})


