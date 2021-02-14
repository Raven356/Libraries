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
    cout << "Ê³ëüê³ñòü ³òåðàö³é âñòàâêàìè = " << iter << "\t×àñ âòàâêàìè = " << searchtime << "\n"; //notification about amount of iterations(iter) and amount of time for the cycle
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
    cout << "Ê³ëüê³ñòü ³òåðàö³é âñòàâêàìè = " << iter << "\t×àñ âòàâêàìè = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
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
    int left = 0, right = count - 1; 
    int flag = 1; 
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i<right; i++)  
        {
            if (mass[i]>mass[i + 1]) 
            {             
                double t = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = t;
                flag = 1;     
            }
        }
        right--; 
        for (int i = right; i>left; i--)  
        {
        if (mass[i - 1]>mass[i]) 
        {           
            double t = mass[i];
            mass[i] = mass[i - 1];
            mass[i - 1] = t;
            flag = 1;   
        }
        }
        left++; 
        iter++;
    }
    stop = clock();
    searchtime = stop - start;
    cout << "Ê³ëüê³ñòü ³òåðàö³é øåéêåðîì = " << iter << "\t×àñ øåéêåðîì = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
}
void shekerSort(double *mass, int count)
{
  int left = 0, right = count - 1, iter{}; 
  int flag = 1; 
  double start, stop;
  start = clock();
  while ((left < right) && flag > 0)
  {
    flag = 0;
    for (int i = left; i<right; i++)  
    {
      if (mass[i]>mass[i + 1]) 
      {             
        double t = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = t;
        flag = 1;      
      }
    }
    right--; 
    for (int i = right; i>left; i--)  
    {
      if (mass[i - 1]>mass[i]) 
      {           
        double t = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = t;
        flag = 1;   
      }
    }
    left++; 
    iter++;
  }
  stop = clock();
  cout << "Ê³ëüê³ñòü ³òåðàö³é øåéêåðîì = " << iter << "\t×àñ øåéêåðîì = " << stop - start << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
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
    cout << "Ê³ëüê³ñòü ³òåðàö³é áóëüáàøêîþ = " << iter << "\t×àñ áóëüáàøêîþ = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
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
    cout << "Ê³ëüê³ñòü ³òåðàö³é áóëüáàøêîþ = " << iter << "\t×àñ áóëüáàøêîþ = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
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
 // cäåëàåì ïåðåñòàíîâêó ýòîãî ýëåìåíòà, ïîìåíÿâ åãî ìåñòàìè ñ òåêóùèì
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
    cout << "Ê³ëüê³ñòü ³òåðàö³é çà âèáîðîì = " << iter << "\t×àñ çà âèáîðîì = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
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
    cout << "Ê³ëüê³ñòü ³òåðàö³é çà âèáîðîì = " << iter << "\t×àñ çà âèáîðîì = " << searchtime << "\n";//notification about amount of iterations(iter) and amount of time for the cycle
}
