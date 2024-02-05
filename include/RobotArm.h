#ifndef ROBOTARM_H
#define ROBOTARM_H

// 필요한 헤더 파일을 여기에 포함시킵니다.

class RobotArm {
public:
    // 생성자와 소멸자
    RobotArm();
    virtual ~RobotArm();

    // 로봇팔 상태를 업데이트하는 메소드
    void update(float deltaTime);

    // 로봇팔의 현재 상태를 설정하는 메소드
    void setPosition(float x, float y, float z);
    void setOrientation(float roll, float pitch, float yaw);

    // 로봇팔의 상태를 가져오는 메소드
    float getX() const;
    float getY() const;
    float getZ() const;
    float getRoll() const;
    float getPitch() const;
    float getYaw() const;

private:
    // 로봇팔의 상태를 나타내는 변수들
    float x, y, z;     // 위치
    float roll, pitch, yaw; // 방향 (오일러 각도)
    // 기타 로봇팔의 상태를 나타내는 변수들이 필요하다면 여기에 추가
};

#endif // ROBOTARM_H
