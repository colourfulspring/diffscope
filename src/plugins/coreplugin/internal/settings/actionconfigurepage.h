#ifndef CHORUSKIT_ACTIONCONFIGUREPAGE_H
#define CHORUSKIT_ACTIONCONFIGUREPAGE_H

#include <CoreApi/isettingpage.h>

namespace Core::Internal {

    class ActionConfigurePage : public ISettingPage {
        Q_OBJECT
    public:
        explicit ActionConfigurePage(QObject *parent = nullptr);
        ~ActionConfigurePage();

    public:
        QString sortKeyword() const override;

        bool matches(const QString &word) const override;
        QWidget *widget() override;

        bool accept() override;
        void finish() override;

    private:
        QWidget *m_widget;
    };

}

#endif // CHORUSKIT_ACTIONCONFIGUREPAGE_H
