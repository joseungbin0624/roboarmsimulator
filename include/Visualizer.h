#ifndef VISUALIZER_H
#define VISUALIZER_H

#include "RobotArm.h"

// 필요한 그래픽 관련 헤더 파일을 여기에 포함시킵니다.

class Visualizer {
public:
    // 생성자와 소멸자
    Visualizer();
    virtual ~Visualizer();

    // 로봇팔을 시각화하는 메소드
    void render(const RobotArm& arm);

private:
    // 시각화를 위한 내부 상태 변수들
    // 예: 카메라 위치, 조명 설정, 쉐이더 프로그램 등
};

#endif // VISUALIZER_H
