TEMPLATE = subdirs
SUBDIRS += nfctestserver

linux*:!linux-armcc:contains(bluez_enabled, yes):contains(QT_CONFIG, dbus) {
    SUBDIRS += btclient
}

symbian {
    SUBDIRS += nfcsymbianbackend
}
