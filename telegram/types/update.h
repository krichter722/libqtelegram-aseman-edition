// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPDATE
#define LQTG_TYPE_UPDATE

#include "telegramtypeobject.h"

#include <QMetaType>
#include "sendmessageaction.h"
#include <QtGlobal>
#include "encryptedchat.h"
#include <QList>
#include "dcoption.h"
#include <QString>
#include "contactlink.h"
#include "messagegroup.h"
#include "privacykey.h"
#include "messagemedia.h"
#include "encryptedmessage.h"
#include "message.h"
#include "peernotifysettings.h"
#include "chatparticipants.h"
#include "notifypeer.h"
#include "peer.h"
#include "userprofilephoto.h"
#include "privacyrule.h"
#include "userstatus.h"
#include "messagesstickerset.h"
#include "webpage.h"

class LIBQTELEGRAMSHARED_EXPORT Update : public TelegramTypeObject
{
public:
    enum UpdateType {
        typeUpdateNewMessage = 0x1f2b0afd,
        typeUpdateMessageID = 0x4e90bfd6,
        typeUpdateDeleteMessages = 0xa20db0e5,
        typeUpdateUserTyping = 0x5c486927,
        typeUpdateChatUserTyping = 0x9a65ea1f,
        typeUpdateChatParticipants = 0x7761198,
        typeUpdateUserStatus = 0x1bfbd823,
        typeUpdateUserName = 0xa7332b73,
        typeUpdateUserPhoto = 0x95313b0c,
        typeUpdateContactRegistered = 0x2575bbb9,
        typeUpdateContactLink = 0x9d2e67c5,
        typeUpdateNewAuthorization = 0x8f06529a,
        typeUpdateNewEncryptedMessage = 0x12bcbd9a,
        typeUpdateEncryptedChatTyping = 0x1710f156,
        typeUpdateEncryption = 0xb4a2e88d,
        typeUpdateEncryptedMessagesRead = 0x38fe25b7,
        typeUpdateChatParticipantAdd = 0xea4b0e5c,
        typeUpdateChatParticipantDelete = 0x6e5f8c22,
        typeUpdateDcOptions = 0x8e5e9873,
        typeUpdateUserBlocked = 0x80ece81a,
        typeUpdateNotifySettings = 0xbec268ef,
        typeUpdateServiceNotification = 0x382dd3e4,
        typeUpdatePrivacy = 0xee3b272a,
        typeUpdateUserPhone = 0x12b9417b,
        typeUpdateReadHistoryInbox = 0x9961fd5c,
        typeUpdateReadHistoryOutbox = 0x2f2f21bf,
        typeUpdateWebPage = 0x7f891213,
        typeUpdateReadMessagesContents = 0x68c13933,
        typeUpdateChannelTooLong = 0x60946422,
        typeUpdateChannel = 0xb6d45656,
        typeUpdateChannelGroup = 0xc36c1e3c,
        typeUpdateNewChannelMessage = 0x62ba04d9,
        typeUpdateReadChannelInbox = 0x4214f37f,
        typeUpdateDeleteChannelMessages = 0xc37521c9,
        typeUpdateChannelMessageViews = 0x98a12b4b,
        typeUpdateChatAdmins = 0x6e947941,
        typeUpdateChatParticipantAdmin = 0xb6901959,
        typeUpdateNewStickerSet = 0x688a30aa,
        typeUpdateStickerSetsOrder = 0xf0dfb451,
        typeUpdateStickerSets = 0x43ae3dec,
        typeUpdateSavedGifs = 0x9375341e,
        typeUpdateBotInlineQuery = 0xc01eea08,
        typeUpdateBotInlineSend = 0xf69e113
    };

    Update(UpdateType classType = typeUpdateNewMessage, InboundPkt *in = 0);
    Update(InboundPkt *in);
    Update(const Null&);
    virtual ~Update();

    void setAction(const SendMessageAction &action);
    SendMessageAction action() const;

    void setAuthKeyId(qint64 authKeyId);
    qint64 authKeyId() const;

    void setBlocked(bool blocked);
    bool blocked() const;

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChat(const EncryptedChat &chat);
    EncryptedChat chat() const;

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

    void setForeignLink(const ContactLink &foreignLink);
    ContactLink foreignLink() const;

    void setGroup(const MessageGroup &group);
    MessageGroup group() const;

    void setIdString(const QString &idString);
    QString idString() const;

    void setIdInt(qint32 idInt);
    qint32 idInt() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setIsAdmin(bool isAdmin);
    bool isAdmin() const;

    void setKey(const PrivacyKey &key);
    PrivacyKey key() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setLocation(const QString &location);
    QString location() const;

    void setMaxDate(qint32 maxDate);
    qint32 maxDate() const;

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMedia(const MessageMedia &media);
    MessageMedia media() const;

    void setMessageEncrypted(const EncryptedMessage &messageEncrypted);
    EncryptedMessage messageEncrypted() const;

    void setMessage(const Message &message);
    Message message() const;

    void setMessageString(const QString &messageString);
    QString messageString() const;

    void setMessages(const QList<qint32> &messages);
    QList<qint32> messages() const;

    void setMyLink(const ContactLink &myLink);
    ContactLink myLink() const;

    void setNotifySettings(const PeerNotifySettings &notifySettings);
    PeerNotifySettings notifySettings() const;

    void setOffset(const QString &offset);
    QString offset() const;

    void setOrder(const QList<qint64> &order);
    QList<qint64> order() const;

    void setParticipants(const ChatParticipants &participants);
    ChatParticipants participants() const;

    void setPeerNotify(const NotifyPeer &peerNotify);
    NotifyPeer peerNotify() const;

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setPhoto(const UserProfilePhoto &photo);
    UserProfilePhoto photo() const;

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

    void setStatus(const UserStatus &status);
    UserStatus status() const;

    void setStickerset(const MessagesStickerSet &stickerset);
    MessagesStickerSet stickerset() const;

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

    void setWebpage(const WebPage &webpage);
    WebPage webpage() const;

    void setClassType(UpdateType classType);
    UpdateType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Update &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    SendMessageAction m_action;
    qint64 m_authKeyId;
    bool m_blocked;
    qint32 m_channelId;
    EncryptedChat m_chat;
    qint32 m_chatId;
    qint32 m_date;
    QList<DcOption> m_dcOptions;
    QString m_device;
    bool m_enabled;
    QString m_firstName;
    ContactLink m_foreignLink;
    MessageGroup m_group;
    QString m_idString;
    qint32 m_idInt;
    qint32 m_inviterId;
    bool m_isAdmin;
    PrivacyKey m_key;
    QString m_lastName;
    QString m_location;
    qint32 m_maxDate;
    qint32 m_maxId;
    MessageMedia m_media;
    EncryptedMessage m_messageEncrypted;
    Message m_message;
    QString m_messageString;
    QList<qint32> m_messages;
    ContactLink m_myLink;
    PeerNotifySettings m_notifySettings;
    QString m_offset;
    QList<qint64> m_order;
    ChatParticipants m_participants;
    NotifyPeer m_peerNotify;
    Peer m_peer;
    QString m_phone;
    UserProfilePhoto m_photo;
    bool m_popup;
    bool m_previous;
    qint32 m_pts;
    qint32 m_ptsCount;
    qint32 m_qts;
    QString m_query;
    qint64 m_queryId;
    qint64 m_randomId;
    QList<PrivacyRule> m_rules;
    UserStatus m_status;
    MessagesStickerSet m_stickerset;
    QString m_type;
    qint32 m_userId;
    QString m_username;
    qint32 m_version;
    qint32 m_views;
    WebPage m_webpage;
    UpdateType m_classType;
};

Q_DECLARE_METATYPE(Update)

#endif // LQTG_TYPE_UPDATE
