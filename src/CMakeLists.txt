cmake_minimum_required(VERSION 3.10)

set(PRJ_NAME transport)

project(transport)

set(SOURCES 
    main.cpp
    common/transport_factory.cpp
    transport/bike.cpp
    transport/bus.cpp
    transport/car.cpp
    transport/scooter.cpp
)


add_executable(transport ${SOURCES})

target_include_directories(transport
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)