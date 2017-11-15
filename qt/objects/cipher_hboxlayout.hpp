#ifndef CIPHER_HBOXLAYOUT_HPP
#define CIPHER_HBOXLAYOUT_HPP

#include <QHBoxLayout>
#include "cipher_widget.hpp"

namespace cm {

class CipherHBoxLayout : public QHBoxLayout
{
	Q_OBJECT
	public:
        explicit CipherHBoxLayout(CipherWidget *parent = nullptr) : 
            QHBoxLayout(parent)
        {

        }
		virtual ~CipherHBoxLayout(void) 
		{
			
		}
	signals:
	public slots:
};

}

#endif // CIPHER_HBOXLAYOUT_HPP

