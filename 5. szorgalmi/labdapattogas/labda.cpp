
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int WIDTH;
int HEIGHT;

struct Ball {
    int x, y;
    int dx, dy;

    void update() {
        x += dx;
        y += dy;

        if (x <= 0 || x >= WIDTH - 1) dx *= -1;
        if (y <= 0 || y >= HEIGHT - 1) dy *= -1;
    }
};

void draw(const Ball& ball) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == ball.x && y == ball.y)
                cout << 'O';
            else if (x == 0 || x == WIDTH - 1)
                cout << '|';
            else if (y == 0 || y == HEIGHT - 1)
                cout << '-';
            else
                cout << ' ';
        }
        cout << '\n';
    }
}

int main() {
    Ball ball;
    cout << "Add meg a palya szelesseget: ";
    cin >> WIDTH;
    cout << "Add meg a palya magassagat: ";
    cin >> HEIGHT;

    cout << "Add meg a labda kezdopontjat(1-"<<WIDTH-2<<", 1-"<<HEIGHT-2<<")";
    cin >> ball.x >> ball.y;
    cout << "Add meg a labda gyorsasagat(horizontalis sebesseg, vertikalis sebesseg): ";
    cin >> ball.dx >> ball.dy;
    while (true) {
        draw(ball);
        ball.update();
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
