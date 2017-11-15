#ifndef CIPHER_VBOXLAYOUT_HPP
#define CIPHER_VBOXLAYOUT_HPP

#include <QVBoxLayout>
#include "cipher_widget.hpp"

namespace cm {

class CipherVBoxLayout : public QVBoxLayout
{
	Q_OBJECT
	public:
        explicit CipherVBoxLayout(CipherWidget *parent = nullptr) : 
            QVBoxLayout(parent)
        {

        }
		virtual ~CipherVBoxLayout(void) {}
	signals:
	public slots:
};

}

#endif // CIPHER_VBOXLAYOUT_HPP

