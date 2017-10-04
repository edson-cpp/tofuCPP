#ifndef DECVAR_H
#define DECVAR_H
#include <QString>

using namespace std;

extern string usu;

class Decvar
{
private:
    const QString CHAVE1 = "_19021722";
    int id_usuario = 0;
    QString nome_usuario = "";
    bool usuario_adm = true;
    QString pasta_sis = "";
    int id_comput = 0;
    QString db_file = "";
public:
    Decvar();
    QString getChave() {return this->CHAVE1;}

    void setIdUsuario(int idusu) {this->id_usuario = idusu;}
    int getIdUsuario() {return this->id_usuario;}

    void setNomeUsuario(QString nomeusu) {this->nome_usuario = nomeusu;}
    QString getNomeUsuario() {return this->nome_usuario;}

    void setUsuarioAdm(bool usuadm) {this->usuario_adm = usuadm;}
    bool getUsuarioAdm() {return this->usuario_adm;}

    void setPastaSis(QString pastasis) {this->pasta_sis = pastasis;}
    QString getPastaSis() {return this->pasta_sis;}

    void setIdComput(int idcomp) {this->id_comput = idcomp;}
    int getIdComput() {return this->id_comput;}

    void setDBFile(QString dbfile) {this->db_file = dbfile;}
    QString getDBFile() {return this->db_file;}
};

#endif // DECVAR_H
