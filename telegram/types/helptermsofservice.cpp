// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "helptermsofservice.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

HelpTermsOfService::HelpTermsOfService(HelpTermsOfServiceType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

HelpTermsOfService::HelpTermsOfService(InboundPkt *in) :
    m_classType(typeHelpTermsOfService)
{
    fetch(in);
}

HelpTermsOfService::HelpTermsOfService(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeHelpTermsOfService)
{
}

HelpTermsOfService::~HelpTermsOfService() {
}

void HelpTermsOfService::setText(const QString &text) {
    m_text = text;
}

QString HelpTermsOfService::text() const {
    return m_text;
}

bool HelpTermsOfService::operator ==(const HelpTermsOfService &b) const {
    return m_classType == b.m_classType &&
           m_text == b.m_text;
}

void HelpTermsOfService::setClassType(HelpTermsOfService::HelpTermsOfServiceType classType) {
    m_classType = classType;
}

HelpTermsOfService::HelpTermsOfServiceType HelpTermsOfService::classType() const {
    return m_classType;
}

bool HelpTermsOfService::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpTermsOfService: {
        m_text = in->fetchQString();
        m_classType = static_cast<HelpTermsOfServiceType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool HelpTermsOfService::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpTermsOfService: {
        out->appendQString(m_text);
        return true;
    }
        break;
    
    default:
        return false;
    }
}
