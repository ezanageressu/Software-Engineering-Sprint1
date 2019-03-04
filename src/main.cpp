#include <QApplication>
#include <QLabel>

/**
 * \brief Main function 
 * 
 * creates new window
 */

int main(int argc, char* argv []){
    QApplication app (argc, argv);
    QLabel * label = new QLabel("Hello World!\n");
    label -> setWindowTitle("HELLO WORLD");
    label -> show();
    return app.exec();
}
