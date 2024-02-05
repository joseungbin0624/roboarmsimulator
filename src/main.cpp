#include <iostream>
#include <memory>
#include <GLFW/glfw3.h>
#include "RobotArm.h"
#include "Visualizer.h"

int main() {
    // GLFW 초기화
    if (!glfwInit()) {
        std::cerr << "GLFW 초기화에 실패했습니다." << std::endl;
        return -1;
    }

    // GLFW를 사용하여 창 생성
    GLFWwindow* window = glfwCreateWindow(800, 600, "RoboArm Simulator", nullptr, nullptr);
    if (!window) {
        std::cerr << "창을 생성할 수 없습니다." << std::endl;
        glfwTerminate();
        return -1;
    }

    // 생성된 창을 현재 컨텍스트로 설정
    glfwMakeContextCurrent(window);

    // 로봇팔 및 시각화 객체 생성
    auto robotArm = std::make_unique<RobotArm>();
    auto visualizer = std::make_unique<Visualizer>();

    // 메인 루프
    float lastTime = glfwGetTime(); // 메인 루프 진입 전에 lastTime 초기화
    while (!glfwWindowShouldClose(window)) {
        // 현재 시간 계산
        float currentTime = glfwGetTime();
        float deltaTime = currentTime - lastTime; // deltaTime 정의
        lastTime = currentTime;

        // 렌더링을 위한 화면 클리어
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // 로봇팔 업데이트 (deltaTime을 인자로 전달)
        robotArm->update(deltaTime); // 이제 deltaTime은 정의되어 있음

        // 시각화
        visualizer->render(*robotArm);

        // 버퍼 교체 및 이벤트 처리
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // GLFW 종료 처리
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

