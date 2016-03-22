#include "cmedorecord.h"

CMedoRecord::CMedoRecord(const QString &id,
                         const QString &content,
                         const QString &attachment,
                         const QString &date,
                         QObject *parent) :
    QObject(parent),
    m_sId(id),
    m_sContent(content),
    m_sAttachment(attachment),
    m_sDate(date)
{

}

QString CMedoRecord::id() const
{
    return m_sId;
}

QString CMedoRecord::setId(const QString &id)
{
    if (m_sId == id) {
        return id;
    }
    m_sId = id;
    emit idChanged();
    return id;
}

QString CMedoRecord::content() const
{
    return m_sContent;
}

QString CMedoRecord::setContent(const QString &content)
{
    if (m_sContent == content) {
        return content;
    }
    m_sContent = content;
    emit contentChanged();
    return content;
}

QString CMedoRecord::attachment() const
{
    return m_sAttachment;
}

QString CMedoRecord::setAttachment(const QString &attachment)
{
    if (m_sAttachment == attachment) {
        return attachment;
    }
    m_sAttachment = attachment;
    emit attachmentChanged();
    return attachment;
}

QString CMedoRecord::date() const
{
    return m_sDate;
}

QString CMedoRecord::setDate(const QString &date)
{
    if (m_sDate == date) {
        return date;
    }
    m_sDate = date;
    emit dateChanged();
    return date;
}

