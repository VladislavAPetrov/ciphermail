#ifndef CIPHER_OBJECT_HPP
#define CIPHER_OBJECT_HPP

#include <QObject>

namespace cm {

class CipherObject : public QObject
{
	Q_OBJECT
	public:
		explicit CipherObject(QObject *parent = nullptr) : QObject(parent) {}
		virtual ~CipherObject(void) {}
	signals:
	public slots:
};

}

#endif // CIPHER_OBJECT_HPP

