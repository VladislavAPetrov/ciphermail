#ifndef CIPHER_SIMPLE_BUTTON_HPP
#define CIPHER_SIMPLE_BUTTON_HPP

#include "cipher_button.hpp"

namespace cm {

class SimpleButton : public CipherButton
{
	Q_OBJECT
    public:
        explicit SimpleButton(const QString &text = "CipherButton", CipherWidget *parent = nullptr) : 
            CipherButton(text, parent)
        {

        }
        
        virtual ~SimpleButton(void) 
        {

        }
    signals:
    public slots:
};

}
#endif // CIPHER_SIMPLE_BUTTON_HPP

