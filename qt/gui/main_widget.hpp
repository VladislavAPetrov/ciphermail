#ifndef CIPHER_MAIN_WIDGET_HPP
#define CIPHER_MAIN_WIDGET_HPP

#include "../gui/simple_button.hpp"
#include "../objects/cipher_vboxlayout.hpp"
#include "../objects/cipher_hboxlayout.hpp"

namespace cm {

class MainWidget : public CipherWidget
{
	Q_OBJECT
	public:
        explicit MainWidget(CipherWidget *parent = nullptr) : 
            CipherWidget(parent) 
        {
            setWindowTitle(tr("Шифровка"));
           
            m_hBtnLay->addWidget(m_newBtn);
            m_hBtnLay->addWidget(m_sendBtn);
            
            m_lBtnLay->addWidget(m_addBtn);
            m_lBtnLay->addWidget(m_delBtn);
            
            m_lay->addItem(m_hBtnLay);
            m_lay->addItem(m_lBtnLay);
            setLayout(m_lay);
        }
		virtual ~MainWidget(void) {}
	signals:
    public slots:
    
    private:
        CipherVBoxLayout *m_lay = new CipherVBoxLayout();
        CipherHBoxLayout *m_hBtnLay = new CipherHBoxLayout();
        CipherHBoxLayout *m_lBtnLay = new CipherHBoxLayout();

        SimpleButton *m_newBtn = new SimpleButton(tr("New"), this);
        SimpleButton *m_sendBtn = new SimpleButton(tr("Send"), this);

        SimpleButton *m_addBtn = new SimpleButton(tr("Добавить"), this);
        SimpleButton *m_delBtn = new SimpleButton(tr("Исключить"), this);


};

}
#endif // CIPHER_MAIN_WIDGET_HPP

