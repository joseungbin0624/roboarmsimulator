cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름 및 버전
project(RoboArmSimulator VERSION 1.0)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 실행 파일에 대한 소스 파일 추가
add_executable(RoboArmSimulator src/main.cpp src/RobotArm.cpp src/Visualizer.cpp)

# 헤더 파일 포함 디렉토리 지정
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    "C:/Program Files/glfw-3.3.9.bin.WIN64/include"
    "C:/Program Files/glm-master"
    "C:/Program Files/eigen-3.4.0"
)

# GLFW, GLM, Eigen3 라이브러리 경로 지정
link_directories(
    "C:/Program Files/glfw-3.3.9.bin.WIN64/lib-vc2022" # 또는 사용하는 컴파일러 버전에 맞는 lib 디렉토리
)

# 라이브러리 링크
target_link_libraries(RoboArmSimulator glfw3 opengl32 glu32 gdi32)

# 추가적인 라이브러리 및 설정이 필요할 경우 여기에 추가
