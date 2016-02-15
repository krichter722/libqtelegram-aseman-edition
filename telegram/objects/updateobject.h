// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPDATE_OBJECT
#define LQTG_TYPE_UPDATE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/update.h"

#include <QPointer>
#include "sendmessageactionobject.h"
#include "encryptedchatobject.h"
#include "contactlinkobject.h"
#include "messagegroupobject.h"
#include "privacykeyobject.h"
#include "messagemediaobject.h"
#include "encryptedmessageobject.h"
#include "messageobject.h"
#include "peernotifysettingsobject.h"
#include "chatparticipantsobject.h"
#include "notifypeerobject.h"
#include "peerobject.h"
#include "userprofilephotoobject.h"
#include "userstatusobject.h"
#include "messagesstickersetobject.h"
#include "webpageobject.h"

class LIBQTELEGRAMSHARED_EXPORT UpdateObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UpdateType)
    Q_PROPERTY(SendMessageActionObject* action READ action WRITE setAction NOTIFY actionChanged)
    Q_PROPERTY(qint64 authKeyId READ authKeyId WRITE setAuthKeyId NOTIFY authKeyIdChanged)
    Q_PROPERTY(bool blocked READ blocked WRITE setBlocked NOTIFY blockedChanged)
    Q_PROPERTY(qint32 channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
    Q_PROPERTY(EncryptedChatObject* chat READ chat WRITE setChat NOTIFY chatChanged)
    Q_PROPERTY(qint32 chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(QList<DcOption> dcOptions READ dcOptions WRITE setDcOptions NOTIFY dcOptionsChanged)
    Q_PROPERTY(QString device READ device WRITE setDevice NOTIFY deviceChanged)
    Q_PROPERTY(bool enabled READ enabled WRITE setEnabled NOTIFY enabledChanged)
    Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
    Q_PROPERTY(ContactLinkObject* foreignLink READ foreignLink WRITE setForeignLink NOTIFY foreignLinkChanged)
    Q_PROPERTY(MessageGroupObject* group READ group WRITE setGroup NOTIFY groupChanged)
    Q_PROPERTY(QString idString READ idString WRITE setIdString NOTIFY idStringChanged)
    Q_PROPERTY(qint32 idInt READ idInt WRITE setIdInt NOTIFY idIntChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(bool isAdmin READ isAdmin WRITE setIsAdmin NOTIFY isAdminChanged)
    Q_PROPERTY(PrivacyKeyObject* key READ key WRITE setKey NOTIFY keyChanged)
    Q_PROPERTY(QString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(QString location READ location WRITE setLocation NOTIFY locationChanged)
    Q_PROPERTY(qint32 maxDate READ maxDate WRITE setMaxDate NOTIFY maxDateChanged)
    Q_PROPERTY(qint32 maxId READ maxId WRITE setMaxId NOTIFY maxIdChanged)
    Q_PROPERTY(MessageMediaObject* media READ media WRITE setMedia NOTIFY mediaChanged)
    Q_PROPERTY(EncryptedMessageObject* messageEncrypted READ messageEncrypted WRITE setMessageEncrypted NOTIFY messageEncryptedChanged)
    Q_PROPERTY(MessageObject* message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(QString messageString READ messageString WRITE setMessageString NOTIFY messageStringChanged)
    Q_PROPERTY(QList<qint32> messages READ messages WRITE setMessages NOTIFY messagesChanged)
    Q_PROPERTY(ContactLinkObject* myLink READ myLink WRITE setMyLink NOTIFY myLinkChanged)
    Q_PROPERTY(PeerNotifySettingsObject* notifySettings READ notifySettings WRITE setNotifySettings NOTIFY notifySettingsChanged)
    Q_PROPERTY(QString offset READ offset WRITE setOffset NOTIFY offsetChanged)
    Q_PROPERTY(QList<qint64> order READ order WRITE setOrder NOTIFY orderChanged)
    Q_PROPERTY(ChatParticipantsObject* participants READ participants WRITE setParticipants NOTIFY participantsChanged)
    Q_PROPERTY(NotifyPeerObject* peerNotify READ peerNotify WRITE setPeerNotify NOTIFY peerNotifyChanged)
    Q_PROPERTY(PeerObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(QString phone READ phone WRITE setPhone NOTIFY phoneChanged)
    Q_PROPERTY(UserProfilePhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(bool popup READ popup WRITE setPopup NOTIFY popupChanged)
    Q_PROPERTY(bool previous READ previous WRITE setPrevious NOTIFY previousChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
    Q_PROPERTY(qint32 qts READ qts WRITE setQts NOTIFY qtsChanged)
    Q_PROPERTY(QString query READ query WRITE setQuery NOTIFY queryChanged)
    Q_PROPERTY(qint64 queryId READ queryId WRITE setQueryId NOTIFY queryIdChanged)
    Q_PROPERTY(qint64 randomId READ randomId WRITE setRandomId NOTIFY randomIdChanged)
    Q_PROPERTY(QList<PrivacyRule> rules READ rules WRITE setRules NOTIFY rulesChanged)
    Q_PROPERTY(UserStatusObject* status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(MessagesStickerSetObject* stickerset READ stickerset WRITE setStickerset NOTIFY stickersetChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
    Q_PROPERTY(qint32 version READ version WRITE setVersion NOTIFY versionChanged)
    Q_PROPERTY(qint32 views READ views WRITE setViews NOTIFY viewsChanged)
    Q_PROPERTY(WebPageObject* webpage READ webpage WRITE setWebpage NOTIFY webpageChanged)
    Q_PROPERTY(Update core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UpdateType {
        TypeUpdateNewMessage,
        TypeUpdateMessageID,
        TypeUpdateDeleteMessages,
        TypeUpdateUserTyping,
        TypeUpdateChatUserTyping,
        TypeUpdateChatParticipants,
        TypeUpdateUserStatus,
        TypeUpdateUserName,
        TypeUpdateUserPhoto,
        TypeUpdateContactRegistered,
        TypeUpdateContactLink,
        TypeUpdateNewAuthorization,
        TypeUpdateNewEncryptedMessage,
        TypeUpdateEncryptedChatTyping,
        TypeUpdateEncryption,
        TypeUpdateEncryptedMessagesRead,
        TypeUpdateChatParticipantAdd,
        TypeUpdateChatParticipantDelete,
        TypeUpdateDcOptions,
        TypeUpdateUserBlocked,
        TypeUpdateNotifySettings,
        TypeUpdateServiceNotification,
        TypeUpdatePrivacy,
        TypeUpdateUserPhone,
        TypeUpdateReadHistoryInbox,
        TypeUpdateReadHistoryOutbox,
        TypeUpdateWebPage,
        TypeUpdateReadMessagesContents,
        TypeUpdateChannelTooLong,
        TypeUpdateChannel,
        TypeUpdateChannelGroup,
        TypeUpdateNewChannelMessage,
        TypeUpdateReadChannelInbox,
        TypeUpdateDeleteChannelMessages,
        TypeUpdateChannelMessageViews,
        TypeUpdateChatAdmins,
        TypeUpdateChatParticipantAdmin,
        TypeUpdateNewStickerSet,
        TypeUpdateStickerSetsOrder,
        TypeUpdateStickerSets,
        TypeUpdateSavedGifs,
        TypeUpdateBotInlineQuery,
        TypeUpdateBotInlineSend
    };

    UpdateObject(const Update &core, QObject *parent = 0);
    UpdateObject(QObject *parent = 0);
    virtual ~UpdateObject();

    void setAction(SendMessageActionObject* action);
    SendMessageActionObject* action() const;

    void setAuthKeyId(qint64 authKeyId);
    qint64 authKeyId() const;

    void setBlocked(bool blocked);
    bool blocked() const;

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChat(EncryptedChatObject* chat);
    EncryptedChatObject* chat() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcOptions(const QList<DcOption> &dcOptions);
    QList<DcOption> dcOptions() const;

    void setDevice(const QString &device);
    QString device() const;

    void setEnabled(bool enabled);
    bool enabled() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setForeignLink(ContactLinkObject* foreignLink);
    ContactLinkObject* foreignLink() const;

    void setGroup(MessageGroupObject* group);
    MessageGroupObject* group() const;

    void setIdString(const QString &idString);
    QString idString() const;

    void setIdInt(qint32 idInt);
    qint32 idInt() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setIsAdmin(bool isAdmin);
    bool isAdmin() const;

    void setKey(PrivacyKeyObject* key);
    PrivacyKeyObject* key() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setLocation(const QString &location);
    QString location() const;

    void setMaxDate(qint32 maxDate);
    qint32 maxDate() const;

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMedia(MessageMediaObject* media);
    MessageMediaObject* media() const;

    void setMessageEncrypted(EncryptedMessageObject* messageEncrypted);
    EncryptedMessageObject* messageEncrypted() const;

    void setMessage(MessageObject* message);
    MessageObject* message() const;

    void setMessageString(const QString &messageString);
    QString messageString() const;

    void setMessages(const QList<qint32> &messages);
    QList<qint32> messages() const;

    void setMyLink(ContactLinkObject* myLink);
    ContactLinkObject* myLink() const;

    void setNotifySettings(PeerNotifySettingsObject* notifySettings);
    PeerNotifySettingsObject* notifySettings() const;

    void setOffset(const QString &offset);
    QString offset() const;

    void setOrder(const QList<qint64> &order);
    QList<qint64> order() const;

    void setParticipants(ChatParticipantsObject* participants);
    ChatParticipantsObject* participants() const;

    void setPeerNotify(NotifyPeerObject* peerNotify);
    NotifyPeerObject* peerNotify() const;

    void setPeer(PeerObject* peer);
    PeerObject* peer() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setPhoto(UserProfilePhotoObject* photo);
    UserProfilePhotoObject* photo() const;

    void setPopup(bool popup);
    bool popup() const;

    void setPrevious(bool previous);
    bool previous() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setQts(qint32 qts);
    qint32 qts() const;

    void setQuery(const QString &query);
    QString query() const;

    void setQueryId(qint64 queryId);
    qint64 queryId() const;

    void setRandomId(qint64 randomId);
    qint64 randomId() const;

    void setRules(const QList<PrivacyRule> &rules);
    QList<PrivacyRule> rules() const;

    void setStatus(UserStatusObject* status);
    UserStatusObject* status() const;

    void setStickerset(MessagesStickerSetObject* stickerset);
    MessagesStickerSetObject* stickerset() const;

    void setType(const QString &type);
    QString type() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsername(const QString &username);
    QString username() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setViews(qint32 views);
    qint32 views() const;

    void setWebpage(WebPageObject* webpage);
    WebPageObject* webpage() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Update &core);
    Update core() const;

    UpdateObject &operator =(const Update &b);
    bool operator ==(const Update &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void actionChanged();
    void authKeyIdChanged();
    void blockedChanged();
    void channelIdChanged();
    void chatChanged();
    void chatIdChanged();
    void dateChanged();
    void dcOptionsChanged();
    void deviceChanged();
    void enabledChanged();
    void firstNameChanged();
    void foreignLinkChanged();
    void groupChanged();
    void idStringChanged();
    void idIntChanged();
    void inviterIdChanged();
    void isAdminChanged();
    void keyChanged();
    void lastNameChanged();
    void locationChanged();
    void maxDateChanged();
    void maxIdChanged();
    void mediaChanged();
    void messageEncryptedChanged();
    void messageChanged();
    void messageStringChanged();
    void messagesChanged();
    void myLinkChanged();
    void notifySettingsChanged();
    void offsetChanged();
    void orderChanged();
    void participantsChanged();
    void peerNotifyChanged();
    void peerChanged();
    void phoneChanged();
    void photoChanged();
    void popupChanged();
    void previousChanged();
    void ptsChanged();
    void ptsCountChanged();
    void qtsChanged();
    void queryChanged();
    void queryIdChanged();
    void randomIdChanged();
    void rulesChanged();
    void statusChanged();
    void stickersetChanged();
    void typeChanged();
    void userIdChanged();
    void usernameChanged();
    void versionChanged();
    void viewsChanged();
    void webpageChanged();

private Q_SLOTS:
    void coreActionChanged();
    void coreChatChanged();
    void coreForeignLinkChanged();
    void coreGroupChanged();
    void coreKeyChanged();
    void coreMediaChanged();
    void coreMessageEncryptedChanged();
    void coreMessageChanged();
    void coreMyLinkChanged();
    void coreNotifySettingsChanged();
    void coreParticipantsChanged();
    void corePeerNotifyChanged();
    void corePeerChanged();
    void corePhotoChanged();
    void coreStatusChanged();
    void coreStickersetChanged();
    void coreWebpageChanged();

private:
    QPointer<SendMessageActionObject> m_action;
    QPointer<EncryptedChatObject> m_chat;
    QPointer<ContactLinkObject> m_foreignLink;
    QPointer<MessageGroupObject> m_group;
    QPointer<PrivacyKeyObject> m_key;
    QPointer<MessageMediaObject> m_media;
    QPointer<EncryptedMessageObject> m_messageEncrypted;
    QPointer<MessageObject> m_message;
    QPointer<ContactLinkObject> m_myLink;
    QPointer<PeerNotifySettingsObject> m_notifySettings;
    QPointer<ChatParticipantsObject> m_participants;
    QPointer<NotifyPeerObject> m_peerNotify;
    QPointer<PeerObject> m_peer;
    QPointer<UserProfilePhotoObject> m_photo;
    QPointer<UserStatusObject> m_status;
    QPointer<MessagesStickerSetObject> m_stickerset;
    QPointer<WebPageObject> m_webpage;
    Update m_core;
};

#endif // LQTG_TYPE_UPDATE_OBJECT
