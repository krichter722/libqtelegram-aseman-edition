// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messages.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "util/tlvalues.h"

using namespace Tg;

Functions::Messages::Messages() {
}

Functions::Messages::~Messages() {
}

bool Functions::Messages::getMessages(OutboundPkt *out, const QList<qint32> &id) {
    out->appendInt(fncMessagesGetMessages);
    out->appendInt(TL_Vector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        out->appendInt(id[i]);
    }
    return true;
}

MessagesMessages Functions::Messages::getMessagesResult(InboundPkt *in) {
    MessagesMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getDialogs(OutboundPkt *out, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncMessagesGetDialogs);
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

MessagesDialogs Functions::Messages::getDialogsResult(InboundPkt *in) {
    MessagesDialogs result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getHistory(OutboundPkt *out, const InputPeer &peer, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncMessagesGetHistory);
    if(!peer.push(out)) return false;
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

MessagesMessages Functions::Messages::getHistoryResult(InboundPkt *in) {
    MessagesMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::search(OutboundPkt *out, const InputPeer &peer, const QString &q, const MessagesFilter &filter, qint32 minDate, qint32 maxDate, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncMessagesSearch);
    if(!peer.push(out)) return false;
    out->appendQString(q);
    if(!filter.push(out)) return false;
    out->appendInt(minDate);
    out->appendInt(maxDate);
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

MessagesMessages Functions::Messages::searchResult(InboundPkt *in) {
    MessagesMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::readHistory(OutboundPkt *out, const InputPeer &peer, qint32 maxId, qint32 offset) {
    out->appendInt(fncMessagesReadHistory);
    if(!peer.push(out)) return false;
    out->appendInt(maxId);
    out->appendInt(offset);
    return true;
}

MessagesAffectedHistory Functions::Messages::readHistoryResult(InboundPkt *in) {
    MessagesAffectedHistory result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::deleteHistory(OutboundPkt *out, const InputPeer &peer, qint32 offset) {
    out->appendInt(fncMessagesDeleteHistory);
    if(!peer.push(out)) return false;
    out->appendInt(offset);
    return true;
}

MessagesAffectedHistory Functions::Messages::deleteHistoryResult(InboundPkt *in) {
    MessagesAffectedHistory result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::deleteMessages(OutboundPkt *out, const QList<qint32> &id) {
    out->appendInt(fncMessagesDeleteMessages);
    out->appendInt(TL_Vector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        out->appendInt(id[i]);
    }
    return true;
}

MessagesAffectedMessages Functions::Messages::deleteMessagesResult(InboundPkt *in) {
    MessagesAffectedMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::receivedMessages(OutboundPkt *out, qint32 maxId) {
    out->appendInt(fncMessagesReceivedMessages);
    out->appendInt(maxId);
    return true;
}

QList<ReceivedNotifyMessage> Functions::Messages::receivedMessagesResult(InboundPkt *in) {
    QList<ReceivedNotifyMessage> result;
    if(in->fetchInt() != (qint32)TL_Vector) return result;
    qint32 result_length = in->fetchInt();
    result.clear();
    for (qint32 i = 0; i < result_length; i++) {
        ReceivedNotifyMessage type;
        if(!type.fetch(in)) return result;
        result.append(type);
    }
    return result;
}

bool Functions::Messages::setTyping(OutboundPkt *out, const InputPeer &peer, const SendMessageAction &action) {
    out->appendInt(fncMessagesSetTyping);
    if(!peer.push(out)) return false;
    if(!action.push(out)) return false;
    return true;
}

bool Functions::Messages::setTypingResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Messages::sendMessage(OutboundPkt *out, qint32 flags, const InputPeer &peer, qint32 replyToMsgId, const QString &message, qint64 randomId) {
    out->appendInt(fncMessagesSendMessage);
    out->appendInt(flags);
    if(!peer.push(out)) return false;
    if(flags & 1<<0) out->appendInt(replyToMsgId);
    out->appendQString(message);
    out->appendLong(randomId);
    return true;
}

MessagesSentMessage Functions::Messages::sendMessageResult(InboundPkt *in) {
    MessagesSentMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::sendMedia(OutboundPkt *out, qint32 flags, const InputPeer &peer, qint32 replyToMsgId, const InputMedia &media, qint64 randomId) {
    out->appendInt(fncMessagesSendMedia);
    out->appendInt(flags);
    if(!peer.push(out)) return false;
    if(flags & 1<<0) out->appendInt(replyToMsgId);
    if(!media.push(out)) return false;
    out->appendLong(randomId);
    return true;
}

UpdatesType Functions::Messages::sendMediaResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::forwardMessages(OutboundPkt *out, const InputPeer &peer, const QList<qint32> &id, const QList<qint64> &randomId) {
    out->appendInt(fncMessagesForwardMessages);
    if(!peer.push(out)) return false;
    out->appendInt(TL_Vector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        out->appendInt(id[i]);
    }
    out->appendInt(TL_Vector);
    out->appendInt(randomId.count());
    for (qint32 i = 0; i < randomId.count(); i++) {
        out->appendLong(randomId[i]);
    }
    return true;
}

UpdatesType Functions::Messages::forwardMessagesResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getChats(OutboundPkt *out, const QList<qint32> &id) {
    out->appendInt(fncMessagesGetChats);
    out->appendInt(TL_Vector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        out->appendInt(id[i]);
    }
    return true;
}

MessagesChats Functions::Messages::getChatsResult(InboundPkt *in) {
    MessagesChats result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getFullChat(OutboundPkt *out, qint32 chatId) {
    out->appendInt(fncMessagesGetFullChat);
    out->appendInt(chatId);
    return true;
}

MessagesChatFull Functions::Messages::getFullChatResult(InboundPkt *in) {
    MessagesChatFull result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::editChatTitle(OutboundPkt *out, qint32 chatId, const QString &title) {
    out->appendInt(fncMessagesEditChatTitle);
    out->appendInt(chatId);
    out->appendQString(title);
    return true;
}

UpdatesType Functions::Messages::editChatTitleResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::editChatPhoto(OutboundPkt *out, qint32 chatId, const InputChatPhoto &photo) {
    out->appendInt(fncMessagesEditChatPhoto);
    out->appendInt(chatId);
    if(!photo.push(out)) return false;
    return true;
}

UpdatesType Functions::Messages::editChatPhotoResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::addChatUser(OutboundPkt *out, qint32 chatId, const InputUser &userId, qint32 fwdLimit) {
    out->appendInt(fncMessagesAddChatUser);
    out->appendInt(chatId);
    if(!userId.push(out)) return false;
    out->appendInt(fwdLimit);
    return true;
}

UpdatesType Functions::Messages::addChatUserResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::deleteChatUser(OutboundPkt *out, qint32 chatId, const InputUser &userId) {
    out->appendInt(fncMessagesDeleteChatUser);
    out->appendInt(chatId);
    if(!userId.push(out)) return false;
    return true;
}

UpdatesType Functions::Messages::deleteChatUserResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::createChat(OutboundPkt *out, const QList<InputUser> &users, const QString &title) {
    out->appendInt(fncMessagesCreateChat);
    out->appendInt(TL_Vector);
    out->appendInt(users.count());
    for (qint32 i = 0; i < users.count(); i++) {
        if(!users[i].push(out)) return false;
    }
    out->appendQString(title);
    return true;
}

UpdatesType Functions::Messages::createChatResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::forwardMessage(OutboundPkt *out, const InputPeer &peer, qint32 id, qint64 randomId) {
    out->appendInt(fncMessagesForwardMessage);
    if(!peer.push(out)) return false;
    out->appendInt(id);
    out->appendLong(randomId);
    return true;
}

UpdatesType Functions::Messages::forwardMessageResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::sendBroadcast(OutboundPkt *out, const QList<InputUser> &contacts, const QList<qint64> &randomId, const QString &message, const InputMedia &media) {
    out->appendInt(fncMessagesSendBroadcast);
    out->appendInt(TL_Vector);
    out->appendInt(contacts.count());
    for (qint32 i = 0; i < contacts.count(); i++) {
        if(!contacts[i].push(out)) return false;
    }
    out->appendInt(TL_Vector);
    out->appendInt(randomId.count());
    for (qint32 i = 0; i < randomId.count(); i++) {
        out->appendLong(randomId[i]);
    }
    out->appendQString(message);
    if(!media.push(out)) return false;
    return true;
}

UpdatesType Functions::Messages::sendBroadcastResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getDhConfig(OutboundPkt *out, qint32 version, qint32 randomLength) {
    out->appendInt(fncMessagesGetDhConfig);
    out->appendInt(version);
    out->appendInt(randomLength);
    return true;
}

MessagesDhConfig Functions::Messages::getDhConfigResult(InboundPkt *in) {
    MessagesDhConfig result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::requestEncryption(OutboundPkt *out, const InputUser &userId, qint32 randomId, const QByteArray &gA) {
    out->appendInt(fncMessagesRequestEncryption);
    if(!userId.push(out)) return false;
    out->appendInt(randomId);
    out->appendBytes(gA);
    return true;
}

EncryptedChat Functions::Messages::requestEncryptionResult(InboundPkt *in) {
    EncryptedChat result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::acceptEncryption(OutboundPkt *out, const InputEncryptedChat &peer, const QByteArray &gB, qint64 keyFingerprint) {
    out->appendInt(fncMessagesAcceptEncryption);
    if(!peer.push(out)) return false;
    out->appendBytes(gB);
    out->appendLong(keyFingerprint);
    return true;
}

EncryptedChat Functions::Messages::acceptEncryptionResult(InboundPkt *in) {
    EncryptedChat result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::discardEncryption(OutboundPkt *out, qint32 chatId) {
    out->appendInt(fncMessagesDiscardEncryption);
    out->appendInt(chatId);
    return true;
}

bool Functions::Messages::discardEncryptionResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Messages::setEncryptedTyping(OutboundPkt *out, const InputEncryptedChat &peer, bool typing) {
    out->appendInt(fncMessagesSetEncryptedTyping);
    if(!peer.push(out)) return false;
    out->appendBool(typing);
    return true;
}

bool Functions::Messages::setEncryptedTypingResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Messages::readEncryptedHistory(OutboundPkt *out, const InputEncryptedChat &peer, qint32 maxDate) {
    out->appendInt(fncMessagesReadEncryptedHistory);
    if(!peer.push(out)) return false;
    out->appendInt(maxDate);
    return true;
}

bool Functions::Messages::readEncryptedHistoryResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Messages::sendEncrypted(OutboundPkt *out, const InputEncryptedChat &peer, qint64 randomId, const QByteArray &data) {
    out->appendInt(fncMessagesSendEncrypted);
    if(!peer.push(out)) return false;
    out->appendLong(randomId);
    out->appendBytes(data);
    return true;
}

MessagesSentEncryptedMessage Functions::Messages::sendEncryptedResult(InboundPkt *in) {
    MessagesSentEncryptedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::sendEncryptedFile(OutboundPkt *out, const InputEncryptedChat &peer, qint64 randomId, const QByteArray &data, const InputEncryptedFile &file) {
    out->appendInt(fncMessagesSendEncryptedFile);
    if(!peer.push(out)) return false;
    out->appendLong(randomId);
    out->appendBytes(data);
    if(!file.push(out)) return false;
    return true;
}

MessagesSentEncryptedMessage Functions::Messages::sendEncryptedFileResult(InboundPkt *in) {
    MessagesSentEncryptedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::sendEncryptedService(OutboundPkt *out, const InputEncryptedChat &peer, qint64 randomId, const QByteArray &data) {
    out->appendInt(fncMessagesSendEncryptedService);
    if(!peer.push(out)) return false;
    out->appendLong(randomId);
    out->appendBytes(data);
    return true;
}

MessagesSentEncryptedMessage Functions::Messages::sendEncryptedServiceResult(InboundPkt *in) {
    MessagesSentEncryptedMessage result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::receivedQueue(OutboundPkt *out, qint32 maxQts) {
    out->appendInt(fncMessagesReceivedQueue);
    out->appendInt(maxQts);
    return true;
}

QList<qint64> Functions::Messages::receivedQueueResult(InboundPkt *in) {
    QList<qint64> result;
    if(in->fetchInt() != (qint32)TL_Vector) return result;
    qint32 result_length = in->fetchInt();
    result.clear();
    for (qint32 i = 0; i < result_length; i++) {
        qint64 type;
        type = in->fetchLong();
        result.append(type);
    }
    return result;
}

bool Functions::Messages::readMessageContents(OutboundPkt *out, const QList<qint32> &id) {
    out->appendInt(fncMessagesReadMessageContents);
    out->appendInt(TL_Vector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        out->appendInt(id[i]);
    }
    return true;
}

MessagesAffectedMessages Functions::Messages::readMessageContentsResult(InboundPkt *in) {
    MessagesAffectedMessages result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getStickers(OutboundPkt *out, const QString &emoticon, const QString &hash) {
    out->appendInt(fncMessagesGetStickers);
    out->appendQString(emoticon);
    out->appendQString(hash);
    return true;
}

MessagesStickers Functions::Messages::getStickersResult(InboundPkt *in) {
    MessagesStickers result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getAllStickers(OutboundPkt *out, const QString &hash) {
    out->appendInt(fncMessagesGetAllStickers);
    out->appendQString(hash);
    return true;
}

MessagesAllStickers Functions::Messages::getAllStickersResult(InboundPkt *in) {
    MessagesAllStickers result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getWebPagePreview(OutboundPkt *out, const QString &message) {
    out->appendInt(fncMessagesGetWebPagePreview);
    out->appendQString(message);
    return true;
}

MessageMedia Functions::Messages::getWebPagePreviewResult(InboundPkt *in) {
    MessageMedia result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::exportChatInvite(OutboundPkt *out, qint32 chatId) {
    out->appendInt(fncMessagesExportChatInvite);
    out->appendInt(chatId);
    return true;
}

ExportedChatInvite Functions::Messages::exportChatInviteResult(InboundPkt *in) {
    ExportedChatInvite result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::checkChatInvite(OutboundPkt *out, const QString &hash) {
    out->appendInt(fncMessagesCheckChatInvite);
    out->appendQString(hash);
    return true;
}

ChatInvite Functions::Messages::checkChatInviteResult(InboundPkt *in) {
    ChatInvite result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::importChatInvite(OutboundPkt *out, const QString &hash) {
    out->appendInt(fncMessagesImportChatInvite);
    out->appendQString(hash);
    return true;
}

UpdatesType Functions::Messages::importChatInviteResult(InboundPkt *in) {
    UpdatesType result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::getStickerSet(OutboundPkt *out, const InputStickerSet &stickerset) {
    out->appendInt(fncMessagesGetStickerSet);
    if(!stickerset.push(out)) return false;
    return true;
}

MessagesStickerSet Functions::Messages::getStickerSetResult(InboundPkt *in) {
    MessagesStickerSet result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Messages::installStickerSet(OutboundPkt *out, const InputStickerSet &stickerset) {
    out->appendInt(fncMessagesInstallStickerSet);
    if(!stickerset.push(out)) return false;
    return true;
}

bool Functions::Messages::installStickerSetResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

bool Functions::Messages::uninstallStickerSet(OutboundPkt *out, const InputStickerSet &stickerset) {
    out->appendInt(fncMessagesUninstallStickerSet);
    if(!stickerset.push(out)) return false;
    return true;
}

bool Functions::Messages::uninstallStickerSetResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

