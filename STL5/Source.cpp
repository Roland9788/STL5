#include <iostream>
#include <list>
#include<conio.h>
#include<Windows.h>
#include<map>
#include<vector>
using namespace std;

/*
List

template <class T, class Allocator=Allocator<T>>
class list

explicit list(const Allocator &a = Allocator());
explicit list(size_type num, const T &val =T(), const Allocator &a = Allocator());
list (const list <T, Allocator> &ob);
template < class InIter> list (InIter start, InIter end, const Allocator &a=Allocator());
Класс list содержит следующие функции-члены:
template <class InIter> void assign(InIter start,
InIter end);
Помещает в список последовательность, определяемую
параметрами start и end.
void assign(size_type num, const T &val);
Помещает в список num элементов со значением val.
reference back();
const_reference back() const;
Возвращает ссылку на последний элемент в списке.
iterator begin();
const_iterator begin() const;
Возвращает итератор для первого элемента в списке.
void clear();
Удаляет все элементы из списка.
bool empty() const;
Возвращает значение истины, если используемый
список пуст, и значение лжи в противном случае.
const_iterator end() const;
iterator end();
Возвращает итератор для конца списка.
iterator erase(iterator i);
Удаляет элемент, адресуемый итератором i, возвращает
итератор для элемента, расположенного после удаленного.
iterator erase(iterator start, iterator end);
Удаляет элементы в диапазоне, задаваемом параметрами start и end, возвращает итератор для элемента,
расположенного за последним удалённым элементом.
reference front();
const_reference front() const;
Возвращает ссылку на первый элемент в списке.
allocator_type get_allocator() const;
Возвращает распределитель списка.
iterator insert(iterator i, const T &val = T());
Вставляет значение val непосредственно перед эле-
ментом, заданным параметром i, возвращает итератор
для этого элемента.
void insert(iterator i, size_type num, const T &val);
Вставляет num копий значения val непосредственно
перед элементом, заданным параметром i.
template <class InIter> void insert(iterator i,
InIter start, InIter end);
Вставляет в список последовательность, определя-
емую параметрами start и end, непосредственно перед
элементом, заданным параметром i.
size_type max_size() const;
Возвращает максимальное число элементов, которое
может содержать список.
void merge(list<T,Allocator> &ob);
template <class Comp> void merge(list<T,Allocator>
&ob, Comp cmpfn);
Объединяет упорядоченный список, содержащийся
в объекте ob, с данным упорядоченным списком. Результат также упорядочивается. После объединения список,
содержащийся в объекте ob, остается пустым. Во второй
форме может быть задана функция сравнения, которая
определяет, когда один элемент меньше другого.
void pop_back();
Удаляет последний элемент в списке.
void pop_front();
Удаляет первый элемент в списке.
void push_back(const T &val);
Добавляет в конец списка элемент со значением, за-
данным параметром val.
void push_front(const T &val);
Добавляет в начало списка элемент со значением,
заданным параметром val.
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
Возвращает реверсивный итератор для конца списка.
reverse_iterator rend();
const_reverse_iterator rbegin() const;
Возвращает реверсивный итератор для начала списка.
void remove(const T &val);
Удаляет из списка элементы со значением, заданным
параметром val.
template <class UnPred> void remove_if(UnPred pr);
Удаляет элементы, для которых унарный предикат pr
равен значению true.
void resize(size_type num, const T &val = T());
Устанавливает емкость списка равной не менее заданного значения num, если вектор для этого нужно удлинить, то в его конец добавляются элементы со значением,
заданным параметром val.
void reverse();
Реверсирует список.
size_type size() const;
Возвращает текущее количество элементов в списке.
void sort();
template <class Comp> void sort(Comp cmpfn);
Сортирует список. Вторая форма сортирует список
с помощью функции сравнения cmpfn, чтобы определять,
когда один элемент меньше другого.
void splice(iterator i, list<T,Allocator> &ob);
Вставляет содержимое списка ob в данный список
в позиции, указанной итератором i. После выполнения
этой операции список ob остается пустым.
void splice(iterator i, list<T,Allocator> &ob,
iterator el);
Удаляет из списка ob элемент, адресуемый итератором
el, и сохраняет его в позиции, адресуемой итератором i.
void splice(iterator i, list<T,Allocator> &ob,
iterator start, iterator end);
Удаляет из списка ob диапазон, определяемый параметрами start и end, и сохраняет его в данном списке,
начиная с позиции, адресуемой итератором i.
void swap(list<T,Allocator> &ob);
Выполняет обмен элементами данного списка и списка ob.
void unique();
template <class BinPred> void unique(BinPred pr);
Удаляет из списка элементы-дубликаты. Вторая форма
для определения уникальности использует предикат pr.

*/

/*
Библиотека map
Класс map поддерживает поддерживает ассоциативный
контейнер, в котором уникальным ключам соответствуют определённые значения. Спецификация его шаблона
имеет следующий вид:
*template <class Key, class T, class Comp = less<key>,
class Allocator =Allocator<pair<const key, T>>>
class map*
Здесь key — тип данных ключей,T — тип сохраняемых
(отображаемых)значений, а Comp — функция, которая
сравнивает два ключа. Класс map имеет следующие
конструкторы:
explicit map(const Comp &cmpfn = Comp(),
Allocator &a = Allocator());
map(map<Key, T, Comp,Allocator> &ob);
template < class InIter> map(InIter start,
InIter end,const Comp &cmpfn = Comp(),
const Allocator &a = Allocator());
Первая форма конструктора создает пустое отображение.
Вторая создает отображение, которое содержит те же эле-
менты, что и отображение ob. Третья создает отображение,
которое содержит элементы в диапазоне, заданном пара-
метрами start и end. Функция, заданная параметром cmpfn
(и если она задана), определяет упорядочение отображения.
Для класса map определены следующие операторы
сравнения:
■■ ==
■■ <
■■ <=
■■ !=
■■ >
■■ >=
Класс map содержит перечисленные ниже функции-члены. В приведенных описаниях элемент key_type
представляет тип ключа, а элемент value_type — пару
элементов pair<Key, T>.
iterator begin();
const_iterator begin() const;
Возвращает итератор для первого элемента в отображении.
void clear();
Удаляет все элементы из отображения.
size_type count(const key_type &k) const;
Возвращает число вхождений ключа k в отображении
(1 или 0).
size_type count(const key_type &k) const;
Возвращает значение true, если данное отображение
пустое, и false в противном случае.
const_iterator end() const;
iterator end();
Возвращает итератор, указывающий на конец отображения.
pair<iterator, iterator> equal_range(const key_type &k);
pair<const_iterator, const_iterator>
equal_range(const key_type &k) const;
Возвращает пару итераторов, которые указывают
на первый и последний элементы в отображении, содержащие заданный ключ.
void erase(iterator i);
Удаляет элемент, адресуемый итератором i.
void erase(iterator start, iterator end);
Удаляет элементы в диапазоне, задаваемом параметрами start и end.
size_type erase(const key_type &k);
Удаляет из отображения элементы, ключи которых
имеют значение k.
iterator find(const key_type &k);
const_iterator find(const key_type &k) const;
Возвращает итератор для заданного ключа. Если ключ
не обнаружен, возвращает итератор до конца отображения.
allocator_type get_allocator() const;
Возвращает распределитель отображения.
iterator insert(iterator i, const value_type &val);
Вставляет значение val после элемента, заданным итератором i, возвращает итератор для этого элемента.
template <class InIter> void insert(InIter start,
InIter end);
Вставляет элементы заданного диапазона.
pair<iterator, bool> insert(const value_type &val);
Вставляет значение val в используемое отображение.
Возвращает итератор для данного отображения. Элемент
вставляет только в том случае, если его еще нет в отображении. Если элемент был вставлен возвращает пару
pair<iterator, true>, в противном случае pair<iterator, false>.
key_compare key_comp() const;
Возвращает объект-функцию, которая сравнивает
ключи.
iterator lower_bound(const key_type &k);
const_iterator lower_bound(const key_type &k) const;
Возвращает итератор для первого элемента в отображении, ключ которого равен значению k или больше
этого значения.
size_type max_size() const;
Возвращает максимальное число элементов, которое
может содержать отображение.
reference operator[](const key_type &i);
Возвращает ссылку на элемент, заданный параметром i. Если этого элемента не существует, вставляет его
в отображение.
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
Возвращает реверсивный итератор для конца отображения.
reverse_iterator rend();
const_reverse_iterator rend() const;
Возвращает реверсивный итератор для начала отображения.
size_type size() const;
Возвращает текущее количество элементов в отображении.
void swap(map<Key, T, Comp, Allocator> &ob);
Выполняет обмен элементами данного отображения
и отображения ob.
iterator upper_bound(const key_type &k);
const_iterator upper_bound(const key_type &k) const;
Возвращает итератор для первого элемента в отображении, ключ которого больше заданного значения k.
value_compare value_comp() const;
Возвращает объект-функцию, которая сравнивает
значения.
Этот класс предназначен для быстрого поиска значения
по ключу. В качестве ключа может быть использовано все,
что угодно, но при этом необходимо помнить, что главной
особенностью ключа является возможность применить
к нему операцию сравнения. Быстрый поиск значения
по ключу осуществляется благодаря тому, что пары хранятся
в отсортированном виде. Этот класс имеет недостаток —
скорость вставки новой пары обратно пропорциональна
количеству элементов, сохраненных в классе. Еще один
важный момент — ключ должен быть уникальным.


*/

/*
Модифицированный вариант map, в котором отсутствует требования уникальности ключа — то есть, если
произвести поиск по ключу, то вернется не одно значение,
а набор значений, сохраненных с данным ключом.
Класс multimap поддерживает поддерживает ассоциативный контейнер, в котором неуникальным (в общем
случае) ключам соответствуют определённые значения.
Спецификация его шаблона имеет следующий вид:
template <class Key, class T, class Comp = less<key>,
class Allocator =Alloctor<pair<const key, T>>>
class multimap
Здесь key — тип данных ключей, T — тип сохраняемых
(отображfемых)значений, а Comp — функция, которая
сравнивает два ключа. Класс multimap имеет следующие
конструкторы:
explicit multimap(const Comp &cmpfn =
Comp(),Allocator &a = Allocator());
multimap(multimap<Key, T, Comp,Allocator> &ob);
template < class InIter> multimap(InIter start,
InIter end,const Comp &cmpfn = Comp(),
const Allocator &a = Allocator());
*/

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


typedef list<int> ourList;

void ShowLists(ourList& l1, ourList l2)
{
	//Создаем итератор.
	ourList::iterator iter;
	cout << "List 1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n";
	cout << "List 2: ";
	for (iter = l2.begin(); iter != l2.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n";

}


int main()
{
	setlocale(LC_ALL, "Rus");

	system("color 2");


	//Создание двух пустых списков
	
	//ourList list1, list2;
	//SetColor(4, 0);
	//cout << "\nСписки\n";
	//for (int i = 0; i < 6; ++i)
	//{
	//	list1.push_back(i);
	//	list2.push_back(i);
	//}
	//SetColor(2, 0);
	//ShowLists(list1, list2);
	//SetColor(4, 0);
	//cout << "\nПеремещение первого элемента в конец списка\n";
	//list2.splice(list2.end(), list2, list2.begin());
	//cout << "\nПереворот списка\n";
	//list1.reverse();
	//SetColor(2, 0);
	//ShowLists(list1, list2);
	//SetColor(4, 0);
	//cout << "\nОтсортированные списки\n";
	//list1.sort();
	//list2.sort();
	//SetColor(2, 0);
	//ShowLists(list1, list2);
	//SetColor(4, 0);
	//cout << "\nОбединение списков в 1\n";
	//list1.merge(list2);
	//SetColor(2, 0);
	//ShowLists(list1, list2);
	//SetColor(4, 0);
	//cout << "\nУдаление дубликатов\n";
	//list1.unique();
	//SetColor(2, 0);
	//ShowLists(list1, list2);



	map<int, int> our_map;
	vector<int> our_vector;
	int size;
	SetColor(4, 0);
	cout << "\nМаксимальный размер вектора: ";
	SetColor(2, 0);
	cout << our_vector.max_size() / sizeof(int) << "\n";

	SetColor(4, 0);
	cout << "\nМаксимальный размер отображения: ";
	SetColor(2, 0);
	cout << our_map.max_size() / sizeof(int) << "\n";

	int val;
	int key;

	SetColor(4, 0);
	cout << "\nВведите ко-во пар которые хотите создать\n";
	SetColor(2, 0);
	cin >> size;
	for (int i = 0; i < size; i++)
	{


		SetColor(4, 0);
		cout << "\nВведите значение: \n";
		SetColor(2, 0);
		cin >> val;
		SetColor(4, 0);
		cout << "\nВведите ключ: \n";
		SetColor(2, 0);
		cin >> key;
		SetColor(4, 0);
		pair<int, int>element(key, val);
		our_map.insert(element);
	}




	//pair<int, int>element(key, val);
	//our_map.insert(element);
	//SetColor(4, 0);
	//cout << "\nКол-во элементов в отоборажении: ";
	//SetColor(2, 0);
	//cout << our_map.size()<<"\n";
	//SetColor(4, 0);
	//cout << "\nВведите значение: \n";
	//SetColor(2, 0);
	//cin >> val;
	//SetColor(4, 0);
	//cout << "\nВведите ключ: \n";
	//SetColor(2, 0);
	//cin >> key;
	//SetColor(4, 0);
	pair<map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));
	if (err.second == false)
	{
		cout << "\nОШИБКА!\n";
	}
	cout << "\nКол-во элементов в отоборажении: ";
	cout << our_map.size() << "\n";
	SetColor(2, 0);
	map<int, int> ::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++)
	{
		SetColor(4, 0);
		cout << "\nКлюч: ";
		SetColor(2, 0);
		cout << iter->first;
		SetColor(4, 0);
		cout << "\nЗначение: ";
		SetColor(2, 0);
		cout << iter->second;
	}


	return 0;
}