/*
 *****************************************************************************
 * Copyright @ 2009 by austriamicrosystems AG                                *
 * All rights are reserved.                                                  *
 *                                                                           *
 * IMPORTANT - PLEASE READ CAREFULLY BEFORE COPYING, INSTALLING OR USING     *
 * THE SOFTWARE.                                                             *
 *                                                                           *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       * 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT         *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS         *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  *
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     *
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT          *
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     *
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY     *
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT       *
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE     *
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.      *
 *****************************************************************************
 */

#ifndef CTAGSETTINGSDIALOG_H
#define CTAGSETTINGSDIALOG_H

#include <QtGui/QDialog>
#include "../../build/tmp/ui/ui_CTagSettingsDialog.h"

#include "../CDataHandler.h"

class CTagSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    CTagSettingsDialog(CDataHandler* dataHandler, QWidget *parent = 0);
    ~CTagSettingsDialog();

public slots:
    int exec(QString tagId);

    void tryAccept();

    void clearAll();
	void loadData(QString epc);
	void save();

	void searchForPicture();
	void searchForApplication();

	void setTimeValue(int value);

signals:
	void newSettingForTag(QString epc);

private:
    Ui::CTagSettingsDialogClass ui;

    CDataHandler* m_dataHandler;
};

#endif // CTAGSETTINGSDIALOG_H
