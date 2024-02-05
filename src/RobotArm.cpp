#include "RobotArm.h"

// RobotArm 클래스의 생성자
RobotArm::RobotArm() 
    : x(0.0), y(0.0), z(0.0), roll(0.0), pitch(0.0), yaw(0.0) {
    // 초기화 코드 (필요한 경우)
}

// RobotArm 클래스의 소멸자
RobotArm::~RobotArm() {
    // 자원 해제 코드 (필요한 경우)
}

// 로봇팔 상태를 업데이트하는 메소드
void RobotArm::update(float deltaTime) {
    // 로봇팔의 상태를 업데이트하는 로직
    // 예: 센서 데이터 처리, 역기구학 계산 등
}

// 로봇팔의 현재 위치를 설정하는 메소드
void RobotArm::setPosition(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// 로봇팔의 현재 방향(오일러 각)을 설정하는 메소드
void RobotArm::setOrientation(float roll, float pitch, float yaw) {
    this->roll = roll;
    this->pitch = pitch;
    this->yaw = yaw;
}

// 각 상태 변수에 대한 getter 메소드
float RobotArm::getX() const { return x; }
float RobotArm::getY() const { return y; }
float RobotArm::getZ() const { return z; }
float RobotArm::getRoll() const { return roll; }
float RobotArm::getPitch() const { return pitch; }
float RobotArm::getYaw() const { return yaw; }
