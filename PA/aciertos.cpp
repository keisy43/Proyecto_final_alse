#include "aciertos.h"
#include "ui_aciertos.h"
#include "prueba.h"
#include "menu.h"

/**
 * @brief aciertos::aciertos
 * Es la funcion del constructor que controla lo que pasa al abrirse  la ventana.
 * @param parent es un puntero de tipo QWidget.
 *
 */
aciertos::aciertos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aciertos)
{
    ui->setupUi(this);

    if (_nota<3.0){
        ui->panel->setText("     ¡ Mal ! Debes esforzarte más.");

    }
    if (_nota>=3.0 && _nota<4.0 ){
        ui->panel->setText("   ¡ Muy bien ! Pero puedes mejorar.");
    }
    if (_nota>=4.0){
         ui->panel->setText("    ¡Felicitaciones! Lo hiciste muy bien.");
    }
    ui->ac->setText(QString::number(conteo));
    ui->valor->setText(QString::number(_nota));

}
/**
 * @brief aciertos::~aciertos
 * Es la funcion del destructor que controla lo que pasa al cerrarse la ventana.
 */
aciertos::~aciertos()
{
    delete ui;
}

/**
 * @brief aciertos::on_volvermenu_clicked
 * Esta funcion es una slot privada que cierra la ventana y nos
 * devuelve al menu.
 */


void aciertos::on_volvermenu_clicked()
{
    this ->close();
    menu z(this);
    z.setModal(true);
    z.show();
    z.exec();
}

/**
 * @brief aciertos::on_pushButton_2_clicked
 * Esta funcion es un slot privado que cierra la ventana
 * al hacer clik en el boton de salir.
 */
void aciertos::on_pushButton_2_clicked()
{
    this->close();
}
