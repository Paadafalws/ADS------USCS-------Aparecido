using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApp1
{
    public class Pessoa
    {
        private string Nome;
        private int Idade;

        public void setNome(string Nome)
        {
            this.Nome = Nome;
        }
        public string getNome()
        {
            return this.Nome;
        }
        public void setIdade(int Idade)
        {
            this.Idade = Idade;
        }
        public int getIdade()
        {
            return this.Idade;
        }

        public Pessoa()
        {

        }

        public class Rica : Pessoa
        {
            private double dinheiro;

            public void setdinheiro(double dinheiro)
            {
                this.dinheiro = dinheiro;
            }
            public double getdinheiro()
            {
                return this.dinheiro;
            }

            public void Fazcompras()
            {

            }

        }
        public class Pobre : Pessoa
        {
            public void trabalho()
            {

            }

        }
        public class Miseravel
        {
            public void mendiga()
            {

            }
        }


    }
}
