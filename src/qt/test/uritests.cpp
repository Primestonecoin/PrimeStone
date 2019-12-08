// Copyright (c) 2009-2014 The Bitcoin developers
<<<<<<< Updated upstream
// Copyright (c) 2017-2018 The PIVX developers
=======
// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2018-2019 The PrimeStone developers
>>>>>>> Stashed changes
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "uritests.h"

#include "guiutil.h"
#include "walletmodel.h"

#include <QUrl>

void URITests::uriTests()
{
    SendCoinsRecipient rv;
    QUrl uri;
<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?dontexist="));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?dontexist="));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 0);

<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?label=Some Example Address"));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?label=Some Example Address"));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString("Some Example Address"));
    QVERIFY(rv.amount == 0);

<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=0.001"));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=0.001"));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100000);

<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1.001"));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1.001"));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100100000);

<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=100&label=Some Example"));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=100&label=Some Example"));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.amount == 10000000000LL);
    QVERIFY(rv.label == QString("Some Example"));

<<<<<<< Updated upstream
    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?message=Some Example Address"));
=======
    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?message=Some Example Address"));
>>>>>>> Stashed changes
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());

<<<<<<< Updated upstream
    QVERIFY(GUIUtil::parseBitcoinURI("pivx://D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?message=Some Example Address", &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?req-message=Some Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1,000&label=Some Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("pivx:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1,000.0&label=Some Example"));
=======
    QVERIFY(GUIUtil::parseBitcoinURI("primestone://D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?message=Some Example Address", &rv));
    QVERIFY(rv.address == QString("D72dLgywmL73JyTwQBfuU29CADz9yCJ99v"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?req-message=Some Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1,000&label=Some Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("primestone:D72dLgywmL73JyTwQBfuU29CADz9yCJ99v?amount=1,000.0&label=Some Example"));
>>>>>>> Stashed changes
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));
}
