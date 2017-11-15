#ifndef CIPHER_BUTTON_HPP
#define CIPHER_BUTTON_HPP

#include <QPushButton>
#include "cipher_widget.hpp"

namespace cm {

class CipherButton : public QPushButton
{
	Q_OBJECT
    public:
        explicit CipherButton(const QString &text = "CipherButton", CipherWidget *parent = nullptr) : 
            QPushButton(text, parent) {}
		virtual ~CipherButton(void) {}
    signals:
    public slots:
};

}
#endif // CIPHER_BUTTON_HPP

