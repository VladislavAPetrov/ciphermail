#include <QApplication>
#include <QTextCodec>

#include "../qt/gui/main_widget.hpp"

int main(int argc, char ** argv) {
	using namespace cm;
	QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
	QApplication app(argc, argv);

	MainWidget w;
	w.show();

	return app.exec();
}
