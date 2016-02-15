// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTFILELOCATION_OBJECT
#define LQTG_TYPE_INPUTFILELOCATION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputfilelocation.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputFileLocationObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputFileLocationType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(qint32 localId READ localId WRITE setLocalId NOTIFY localIdChanged)
    Q_PROPERTY(qint64 secret READ secret WRITE setSecret NOTIFY secretChanged)
    Q_PROPERTY(qint64 volumeId READ volumeId WRITE setVolumeId NOTIFY volumeIdChanged)
    Q_PROPERTY(InputFileLocation core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputFileLocationType {
        TypeInputFileLocation,
        TypeInputEncryptedFileLocation,
        TypeInputDocumentFileLocation
    };

    InputFileLocationObject(const InputFileLocation &core, QObject *parent = 0);
    InputFileLocationObject(QObject *parent = 0);
    virtual ~InputFileLocationObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputFileLocation &core);
    InputFileLocation core() const;

    InputFileLocationObject &operator =(const InputFileLocation &b);
    bool operator ==(const InputFileLocation &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void idChanged();
    void localIdChanged();
    void secretChanged();
    void volumeIdChanged();

private Q_SLOTS:

private:
    InputFileLocation m_core;
};

#endif // LQTG_TYPE_INPUTFILELOCATION_OBJECT
