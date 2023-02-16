using System; 
/* beecrowd | 1002 */
//Neiva04
class URI {

    static void Main(string[] args) { 
    
    const double pi = 3.14159;

     double raiof = double.Parse(Console.ReadLine());//garantir que o input do usuario vai ser um double
     double raio = Math.Round(raiof,2);//limitar a precisão do input a 2 casa decimais
     double area = pi*(raio*raio);
    
     Console.WriteLine("A={0:F4}",area);//imprimir apenas com a precisão de 4 casas decimais
    
    }
}