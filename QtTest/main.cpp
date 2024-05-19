#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QPushButton button("Click me");
    QObject::connect(&button, &QPushButton::clicked, []() {
        QMessageBox::information(nullptr, "Message", "Button was clicked!");
        });

    button.resize(200, 100);
    button.show();

    return app.exec();
}
