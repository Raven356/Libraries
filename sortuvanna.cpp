#include <iostream>
#include <ctime>

using namespace std;

void random_sort_vst(int n)
{
    int x[n]{}, iter;
    for(int i{}; i < n; i++)
    {
        x[i] = rand() % n + n;
    }
    double start{}, stop{}, searchtime{};
    start = clock();
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0 && x[j-1]>x[j];j--)
        {
            iter++;
                swap(x[j-1],x[j]);
        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій вставками = " << iter << "\tЧас втавками = " << searchtime << "\n";
}
void sort_vst(double *x, int n)
{
    int iter;
    double start{}, stop{}, searchtime{};
    start = clock();
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0 && x[j-1]>x[j];j--)
        {
            iter++;
                swap(x[j-1],x[j]);
        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій вставками = " << iter << "\tЧас втавками = " << searchtime << "\n";
}
void random_shekerSort(int count)
{
    int mass[count], iter;
    for(int i{}; i < count; i++)
        {
            mass[i] = rand() % count + count;
        }
    double start{}, stop{}, searchtime{};
    start = clock();
    int left = 0, right = count - 1; // левая и правая границы сортируемой области массива
    int flag = 1;  // флаг наличия перемещений
  // Выполнение цикла пока левая граница не сомкнётся с правой
  // и пока в массиве имеются перемещения
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i<right; i++)  //двигаемся слева направо
        {
            if (mass[i]>mass[i + 1]) // если следующий элемент меньше текущего,
            {             // меняем их местами
                double t = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = t;
                flag = 1;      // перемещения в этом цикле были
            }
        }
        right--; // сдвигаем правую границу на предыдущий элемент
        for (int i = right; i>left; i--)  //двигаемся справа налево
        {
        if (mass[i - 1]>mass[i]) // если предыдущий элемент больше текущего,
        {            // меняем их местами
            double t = mass[i];
            mass[i] = mass[i - 1];
            mass[i - 1] = t;
            flag = 1;    // перемещения в этом цикле были
        }
        }
        left++; // сдвигаем левую границу на следующий элемент
        iter++;
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій шейкером = " << iter << "\tЧас шейкером = " << searchtime << "\n";
}
void shekerSort(double *mass, int count)
{
  int left = 0, right = count - 1, iter{}; // левая и правая границы сортируемой области массива
  int flag = 1;  // флаг наличия перемещений
  // Выполнение цикла пока левая граница не сомкнётся с правой
  // и пока в массиве имеются перемещения
  double start, stop;
  start = clock();
  while ((left < right) && flag > 0)
  {
    flag = 0;
    for (int i = left; i<right; i++)  //двигаемся слева направо
    {
      if (mass[i]>mass[i + 1]) // если следующий элемент меньше текущего,
      {             // меняем их местами
        double t = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = t;
        flag = 1;      // перемещения в этом цикле были
      }
    }
    right--; // сдвигаем правую границу на предыдущий элемент
    for (int i = right; i>left; i--)  //двигаемся справа налево
    {
      if (mass[i - 1]>mass[i]) // если предыдущий элемент больше текущего,
      {            // меняем их местами
        double t = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = t;
        flag = 1;    // перемещения в этом цикле были
      }
    }
    left++; // сдвигаем левую границу на следующий элемент
    iter++;
  }
  stop = clock();
  cout << "Кількість ітерацій шейкером = " << iter << "\tЧас шейкером = " << stop - start << "\n";
}

void random_sort_bulb(int n)
{
    int x = 0, tmp{}, iter{}, mas[n]{};
    for(int i{}; i < n; i++)
    {
        mas[i] = rand() % n + n;
    }
    double start{}, stop{}, searchtime{};
    start = clock();
    for (int i = n - 1; i > x; i--)
    {
        for (int j = n - 1; j > x; j--) {
            if (mas[j] < mas[j - 1]) {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
                iter++;
            }

        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій бульбашкою = " << iter << "\tЧас бульбашкою = " << searchtime << "\n";
}
void sort_bulb(double *mas, int n)
{
    int x = 0, tmp{}, iter{};
    double start{}, stop{}, searchtime{};
    start = clock();
    for (int i = n - 1; i > x; i--)
    {
        for (int j = n - 1; j > x; j--) {
            if (mas[j] < mas[j - 1]) {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
                iter++;
            }

        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій бульбашкою = " << iter << "\tЧас бульбашкою = " << searchtime << "\n";
}
void random_sort_viborom(int n)
{
    int mas[n]{};
    for(int i{}; i < n; i++)
        {
            mas[i] = rand() % n + n;
        }
    int min = 0;
    int buf = 0;
    unsigned int iter{};
    double start{}, stop{}, searchtime{};
    start = clock();
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        min = ( mas[j] < mas[min] ) ? j : min;
 // cделаем перестановку этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
            iter++;
        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій за вибором = " << iter << "\tЧас за вибором = " << searchtime << "\n";
}
void sort_viborom(double *mas, int n)
{
    int min = 0;
    int buf = 0;
    unsigned int iter{};
    double start{}, stop{}, searchtime{};
    start = clock();
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        min = ( mas[j] < mas[min] ) ? j : min;
 // cделаем перестановку этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
            iter++;
        }
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Кількість ітерацій за вибором = " << iter << "\tЧас за вибором = " << searchtime << "\n";
}
