// // // // quicksort
// // // #include <iostream>
// // // using namespace std;
// // // int partition(int arr[], int start, int end)
// // // {
// // // 	int pivot = arr[start];
// // // 	int count = 0;
// // // 	for (int i = start + 1; i <= end; i++) {
// // // 		if (arr[i] <= pivot)
// // // 			count++;
// // // 	}
// // // 	int pivotIndex = start + count;
// // // 	swap(arr[pivotIndex], arr[start]);
// // // 	int i = start, j = end;
// // // 	while (i < pivotIndex && j > pivotIndex) {
// // // 		while (arr[i] <= pivot) {
// // // 			i++;
// // // 		}
// // // 		while (arr[j] > pivot) {
// // // 			j--;
// // // 		}
// // // 		if (i < pivotIndex && j > pivotIndex) {
// // // 			swap(arr[i++], arr[j--]);
// // // 		}
// // // 	}
// // // 	return pivotIndex;
// // // }
// // // void quickSort(int arr[], int start, int end)
// // // {
// // // 	if (start >= end)
// // // 		return;
// // // 	int p = partition(arr, start, end);
// // // 	quickSort(arr, start, p - 1);
// // // 	quickSort(arr, p + 1, end);
// // // }

// // // int main()
// // // {
// // //     int n,i,arr[n];
// // //     cin>>n;
// // //     for(i=0;i<n;i++)
// // //     cin>>arr[i];
// // // 	quickSort(arr, 0, n - 1);

// // // 	for (int i = 0; i < n; i++) {
// // // 		cout << arr[i] << " ";
// // // 	}

// // // 	return 0;
// // // }


// // #include<bits/stdc++.h>
// // using namespace std;

// // pair<int, int> mid;
// // int quad(pair<int, int> p)
// // {
// //     if (p.first >= 0 && p.second >= 0)
// //         return 1;
// //     if (p.first <= 0 && p.second >= 0)
// //         return 2;
// //     if (p.first <= 0 && p.second <= 0)
// //         return 3;
// //     return 4;
// // }
// // // Checks whether the line is crossing the polygon
// // int orientation(pair<int, int> a, pair<int, int> b,
// //                 pair<int, int> c)
// // {
// //     int res = (b.second-a.second)*(c.first-b.first) -
// //               (c.second-b.second)*(b.first-a.first);
// //     if (res == 0)
// //         return 0;
// //     if (res > 0)
// //         return 1;
// //     return -1;
// // }
// // // compare function for sorting
// // bool compare(pair<int, int> p1, pair<int, int> q1)
// // {
// //     pair<int, int> p = make_pair(p1.first - mid.first,
// //                                  p1.second - mid.second);
// //     pair<int, int> q = make_pair(q1.first - mid.first,
// //                                  q1.second - mid.second);
// //     int one = quad(p);
// //     int two = quad(q);
// //     if (one != two)
// //         return (one < two);
// //     return (p.second*q.first < q.second*p.first);
// // }

// // vector<pair<int, int>> merger(vector<pair<int, int> > a,
// //                               vector<pair<int, int> > b)
// // {

// //     int n1 = a.size(), n2 = b.size();
// //     int ia = 0, ib = 0;
// //     for (int i=1; i<n1; i++)
// //         if (a[i].first > a[ia].first)
// //             ia = i;
// //     // ib -> leftmost point of b
// //     for (int i=1; i<n2; i++)
// //         if (b[i].first < b[ib].first)
// //             ib=i;
// //     // finding the upper tangent
// //     int inda = ia, indb = ib;
// //     bool done = 0;
// //     while (!done)
// //     {
// //         done = 1;
// //         while (orientation(b[indb], a[inda], a[(inda+1)%n1]) >=0)
// //             inda = (inda + 1) % n1;
// //         while (orientation(a[inda], b[indb], b[(n2+indb-1)%n2]) <=0)
// //         {
// //             indb = (n2+indb-1)%n2;
// //             done = 0;
// //         }
// //     }
// //     int uppera = inda, upperb = indb;
// //     inda = ia, indb=ib;
// //     done = 0;
// //     int g = 0;
// //     while (!done)//finding the lower tangent
// //     {
// //         done = 1;
// //         while (orientation(a[inda], b[indb], b[(indb+1)%n2])>=0)
// //             indb=(indb+1)%n2;
// //         while (orientation(b[indb], a[inda], a[(n1+inda-1)%n1])<=0)
// //         {
// //             inda=(n1+inda-1)%n1;
// //             done=0;
// //         }
// //     }
// //     int lowera = inda, lowerb = indb;
// //     vector<pair<int, int>> ret;

// //     int ind = uppera;
// //     ret.push_back(a[uppera]);
// //     while (ind != lowera)
// //     {
// //         ind = (ind+1)%n1;
// //         ret.push_back(a[ind]);
// //     }
// //     ind = lowerb;
// //     ret.push_back(b[lowerb]);
// //     while (ind != upperb)
// //     {
// //         ind = (ind+1)%n2;
// //         ret.push_back(b[ind]);
// //     }
// //     return ret;
// // }

// // vector<pair<int, int>> bruteHull(vector<pair<int, int>> a)
// // {

// //     set<pair<int, int> >s;
// //     for (int i=0; i<a.size(); i++)
// //     {
// //         for (int j=i+1; j<a.size(); j++)
// //         {
// //             int x1 = a[i].first, x2 = a[j].first;
// //             int y1 = a[i].second, y2 = a[j].second;
// //             int a1 = y1-y2;
// //             int b1 = x2-x1;
// //             int c1 = x1*y2-y1*x2;
// //             int pos = 0, neg = 0;
// //             for (int k=0; k<a.size(); k++)
// //             {
// //                 if (a1*a[k].first+b1*a[k].second+c1 <= 0)
// //                     neg++;
// //                 if (a1*a[k].first+b1*a[k].second+c1 >= 0)
// //                     pos++;
// //             }
// //             if (pos == a.size() || neg == a.size())
// //             {
// //                 s.insert(a[i]);
// //                 s.insert(a[j]);
// //             }
// //         }
// //     }
// //     vector<pair<int, int>>ret;
// //     for (auto e:s)
// //         ret.push_back(e);
// //     // Sorting the points in the anti-clockwise order
// //     mid = {0, 0};
// //     int n = ret.size();
// //     for (int i=0; i<n; i++)
// //     {
// //         mid.first += ret[i].first;
// //         mid.second += ret[i].second;
// //         ret[i].first *= n;
// //         ret[i].second *= n;
// //     }
// //     sort(ret.begin(), ret.end(), compare);
// //     for (int i=0; i<n; i++)
// //         ret[i] = make_pair(ret[i].first/n, ret[i].second/n);
// //     return ret;
// // }

// // vector<pair<int, int>> divide(vector<pair<int, int>> a)
// // {

// //     if (a.size() <= 5)
// //         return bruteHull(a);

// //     vector<pair<int, int>>left, right;
// //     for (int i=0; i<a.size()/2; i++)
// //         left.push_back(a[i]);
// //     for (int i=a.size()/2; i<a.size(); i++)
// //         right.push_back(a[i]);
  
// //     vector<pair<int, int>>left_hull = divide(left);
// //     vector<pair<int, int>>right_hull = divide(right);

// //     return merger(left_hull, right_hull);
// // }

// // int main()
// // {
// //     vector<pair<int, int> > a;
// //     cout<<"Enter the nubmber of pairs ";
// //     int n;
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         int n1,n2;
// //         cin>>n1>>n2;
// //         a.push_back(make_pair(n1, n2));
// //     }

// //     n = a.size();
// //     sort(a.begin(), a.end());
// //     vector<pair<int, int> >ans = divide(a);
// //     cout << "convex hull:\n";
// //     for (auto e:ans)
// //        cout << e.first << " "
// //             << e.second << endl;
// //     return 0;
// // }

// // convex hull
// #include<bits/stdc++.h>
// using namespace std;

// pair<int, int> mid;
// int quad(pair<int, int> p)
// {
//     if (p.first >= 0 && p.second >= 0)
//         return 1;
//     if (p.first <= 0 && p.second >= 0)
//         return 2;
//     if (p.first <= 0 && p.second <= 0)
//         return 3;
//     return 4;
// }
// // Checks whether the line is crossing the polygon
// int orientation(pair<int, int> a, pair<int, int> b,
//                 pair<int, int> c)
// {
//     int res = (b.second-a.second)*(c.first-b.first) -
//               (c.second-b.second)*(b.first-a.first);
//     if (res == 0)
//         return 0;
//     if (res > 0)
//         return 1;
//     return -1;
// }
// // compare function for sorting
// bool compare(pair<int, int> p1, pair<int, int> q1)
// {
//     pair<int, int> p = make_pair(p1.first - mid.first,
//                                  p1.second - mid.second);
//     pair<int, int> q = make_pair(q1.first - mid.first,
//                                  q1.second - mid.second);
//     int one = quad(p);
//     int two = quad(q);
//     if (one != two)
//         return (one < two);
//     return (p.second*q.first < q.second*p.first);
// }

// vector<pair<int, int>> merger(vector<pair<int, int> > a,
//                               vector<pair<int, int> > b)
// {

//     int n1 = a.size(), n2 = b.size();
//     int ia = 0, ib = 0;
//     for (int i=1; i<n1; i++)
//         if (a[i].first > a[ia].first)
//             ia = i;
//     // ib -> leftmost point of b
//     for (int i=1; i<n2; i++)
//         if (b[i].first < b[ib].first)
//             ib=i;
//     // finding the upper tangent
//     int inda = ia, indb = ib;
//     bool done = 0;
//     while (!done)
//     {
//         done = 1;
//         while (orientation(b[indb], a[inda], a[(inda+1)%n1]) >=0)
//             inda = (inda + 1) % n1;
//         while (orientation(a[inda], b[indb], b[(n2+indb-1)%n2]) <=0)
//         {
//             indb = (n2+indb-1)%n2;
//             done = 0;
//         }
//     }
//     int uppera = inda, upperb = indb;
//     inda = ia, indb=ib;
//     done = 0;
//     int g = 0;
//     while (!done)//finding the lower tangent
//     {
//         done = 1;
//         while (orientation(a[inda], b[indb], b[(indb+1)%n2])>=0)
//             indb=(indb+1)%n2;
//         while (orientation(b[indb], a[inda], a[(n1+inda-1)%n1])<=0)
//         {
//             inda=(n1+inda-1)%n1;
//             done=0;
//         }
//     }
//     int lowera = inda, lowerb = indb;
//     vector<pair<int, int>> ret;

//     int ind = uppera;
//     ret.push_back(a[uppera]);
//     while (ind != lowera)
//     {
//         ind = (ind+1)%n1;
//         ret.push_back(a[ind]);
//     }
//     ind = lowerb;
//     ret.push_back(b[lowerb]);
//     while (ind != upperb)
//     {
//         ind = (ind+1)%n2;
//         ret.push_back(b[ind]);
//     }
//     return ret;
// }

// vector<pair<int, int>> bruteHull(vector<pair<int, int>> a)
// {

//     set<pair<int, int> >s;
//     for (int i=0; i<a.size(); i++)
//     {
//         for (int j=i+1; j<a.size(); j++)
//         {
//             int x1 = a[i].first, x2 = a[j].first;
//             int y1 = a[i].second, y2 = a[j].second;
//             int a1 = y1-y2;
//             int b1 = x2-x1;
//             int c1 = x1*y2-y1*x2;
//             int pos = 0, neg = 0;
//             for (int k=0; k<a.size(); k++)
//             {
//                 if (a1*a[k].first+b1*a[k].second+c1 <= 0)
//                     neg++;
//                 if (a1*a[k].first+b1*a[k].second+c1 >= 0)
//                     pos++;
//             }
//             if (pos == a.size() || neg == a.size())
//             {
//                 s.insert(a[i]);
//                 s.insert(a[j]);
//             }
//         }
//     }
//     vector<pair<int, int>>ret;
//     for (auto e:s)
//         ret.push_back(e);
//     // Sorting the points in the anti-clockwise order
//     mid = {0, 0};
//     int n = ret.size();
//     for (int i=0; i<n; i++)
//     {
//         mid.first += ret[i].first;
//         mid.second += ret[i].second;
//         ret[i].first *= n;
//         ret[i].second *= n;
//     }
//     sort(ret.begin(), ret.end(), compare);
//     for (int i=0; i<n; i++)
//         ret[i] = make_pair(ret[i].first/n, ret[i].second/n);
//     return ret;
// }

// vector<pair<int, int>> divide(vector<pair<int, int>> a)
// {

//     if (a.size() <= 5)
//         return bruteHull(a);

//     vector<pair<int, int>>left, right;
//     for (int i=0; i<a.size()/2; i++)
//         left.push_back(a[i]);
//     for (int i=a.size()/2; i<a.size(); i++)
//         right.push_back(a[i]);
  
//     vector<pair<int, int>>left_hull = divide(left);
//     vector<pair<int, int>>right_hull = divide(right);

//     return merger(left_hull, right_hull);
// }

// int main()
// {
//     vector<pair<int, int> > a;
//     cout<<"Enter the nubmber of pairs ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int n1,n2;
//         cin>>n1>>n2;
//         a.push_back(make_pair(n1, n2));
//     }

//     n = a.size();
//     sort(a.begin(), a.end());
//     vector<pair<int, int> >ans = divide(a);
//     cout << "convex hull:\n";
//     for (auto e:ans)
//        cout << e.first << " "
//             << e.second << endl;
//     return 0;
// }

// huffman coding
#include <bits/stdc++.h>
using namespace std;

// A Huffman tree node
struct MinHeapNode {

	// One of the input characters
	char data;

	// Frequency of the character
	unsigned freq;

	// Left and right child
	MinHeapNode *left, *right;

	MinHeapNode(char data, unsigned freq)

	{

		left = right = NULL;
		this->data = data;
		this->freq = freq;
	}
};

// For comparison of
// two heap nodes (needed in min heap)
struct compare {

	bool operator()(MinHeapNode* l, MinHeapNode* r)

	{
		return (l->freq > r->freq);
	}
};

// Prints huffman codes from
// the root of Huffman Tree.
void printCodes(struct MinHeapNode* root, string str)
{

	if (!root)
		return;

	if (root->data != '$')
		cout << root->data << ": " << str << "\n";

	printCodes(root->left, str + "0");
	printCodes(root->right, str + "1");
}

// The main function that builds a Huffman Tree and
// print codes by traversing the built Huffman Tree
void HuffmanCodes(char data[], int freq[], int size)
{
	struct MinHeapNode *left, *right, *top;

	// Create a min heap & inserts all characters of data[]
	priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;

	for (int i = 0; i < size; ++i)
		minHeap.push(new MinHeapNode(data[i], freq[i]));

	// Iterate while size of heap doesn't become 1
	while (minHeap.size() != 1) {

		// Extract the two minimum
		// freq items from min heap
		left = minHeap.top();
		minHeap.pop();

		right = minHeap.top();
		minHeap.pop();

		// Create a new internal node with
		// frequency equal to the sum of the
		// two nodes frequencies. Make the
		// two extracted node as left and right children
		// of this new node. Add this node
		// to the min heap '$' is a special value
		// for internal nodes, not used
		top = new MinHeapNode('$', left->freq + right->freq);

		top->left = left;
		top->right = right;

		minHeap.push(top);
	}

	// Print Huffman codes using
	// the Huffman tree built above
	printCodes(minHeap.top(), "");
}

// Driver Code
int main()
{

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	int freq[] = { 5, 9, 12, 13, 16, 45 };

	int size = sizeof(arr) / sizeof(arr[0]);

	HuffmanCodes(arr, freq, size);

	return 0;
}
