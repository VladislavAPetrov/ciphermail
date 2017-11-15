#ifndef CIPHER_WIDGET_HPP
#define CIPHER_WIDGET_HPP

#include <QWidget>
#include "cipher_object.hpp"

namespace cm {

class CipherWidget : public QWidget
{
	Q_OBJECT
	public:
		explicit CipherWidget(CipherWidget *parent = 0) : QWidget(parent) {}
		virtual ~CipherWidget(void) {}
	signals:
	public slots:
};

}
#endif // CIPHER_WIDGET_HPP

