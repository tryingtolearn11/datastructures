%PDF-1.3
%«Ïè¢
1 0 obj
<</Type/Font/Subtype/Type1/Name/F1/BaseFont/Helvetica/Encoding/WinAnsiEncoding>>
endobj
2 0 obj
<</Type/Font/Subtype/Type1/Name/F2/BaseFont/Helvetica-Bold/Encoding/WinAnsiEncoding>>
endobj
3 0 obj
<</Type/Font/Subtype/Type1/Name/F3/BaseFont/Helvetica-Oblique/Encoding/WinAnsiEncoding>>
endobj
4 0 obj
<</Type/Font/Subtype/Type1/Name/F4/BaseFont/Helvetica-BoldOblique/Encoding/WinAnsiEncoding>>
endobj
5 0 obj
<</Length 2202>>
stream
BT 1 0 0 1 72 762 Tm
/F1 11 Tf 0.514 0.580 0.588 rg 0 -13.2 TD
(#include <vector>)Tj
T*
(using std::vector;)Tj
T*
(#include <iostream>)Tj
T*
(using std::cout;)Tj
T*
T*
(vector<vector<bool> > world = {)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},)Tj
T*
({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})Tj
T*
(};)Tj
T*
T*
(// i want this to apply the rules to the world)Tj
T*
(size_t nbrCount\(size_t i, size_t j,const vector<vector<bool> >&g\))Tj
T*
({)Tj
T*
(  vector<vector<bool> >newworld;                  //declared new world)Tj
T*
(  for \(int i =0; i<g.size\(\); ++i\) {)Tj
T*
(    for \(int j =0; j < g[i].size\(\); ++j\) {)Tj
T*
(      newworld[i][j] = g[i][j];                  //copy old to new)Tj
T*
(      int count = 0;      //count how many live neighbors)Tj
T*
(      int x = g.size\(\);  //I rows)Tj
T*
(      int y = g[i].size\(\); //J colums)Tj
T*
(        int posI = \(i+1\);)Tj
T*
(        int negI = \(i-1\);)Tj
T*
(        int posJ = \(j+1\);)Tj
T*
(        int negJ = \(j-1\);)Tj
T*
T*
(      if\(newworld[\(posI+x\)%x][\(negJ+y\)%y] == true\) { //top left cell)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[\(posI+x\)%x][j] == true\) { //top middle cell)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[\(posI+x\)%x][\(posJ+y\)%y] == true\) { //top right cell)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[i][\(negJ+y\)%y] == true\) { //left cell)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[i][\(posJ+y\)%y] == true\) { //right cell)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[\(negI+x\)%x][\(negJ+y\)%y] == true\) { //bottom left)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      else if \(newworld[\(negI+x\)%x][j] == true \) { //bottom middle)Tj
ET
endstream
endobj
6 0 obj
<</Length 1658>>
stream
BT 1 0 0 1 72 762 Tm
/F1 11 Tf 0.514 0.580 0.588 rg (        count++;)Tj
0 -13.2 TD
(      })Tj
T*
(      else if \(newworld[\(negI+x\)%x][\(posJ+y\)%y] == true \) { //bottom right)Tj
T*
(        count++;)Tj
T*
(      })Tj
T*
(      if \( count == 3\) { //if cell has 3 neighbors)Tj
T*
(        newworld[i].push_back\(true\);)Tj
T*
(      })Tj
T*
(        else {)Tj
T*
(          newworld[i].push_back\(false\);)Tj
T*
(        })Tj
T*
T*
(      })Tj
T*
(    })Tj
T*
(return newworld[i][j];)Tj
T*
T*
(})Tj
T*
T*
(//prints grid)Tj
T*
(void display\(vector<vector<bool> >&a\))Tj
T*
({)Tj
T*
(  for \(int row = 0; row < 10; row++\) {)Tj
T*
(    vector<bool> temp;)Tj
T*
(    for \(int column = 0; column < 20; column++\) {)Tj
T*
(      temp.push_back\(row\);)Tj
T*
(    })Tj
T*
(  })Tj
T*
(  for \(unsigned int i = 0; i < a.size\(\); i++\){)Tj
T*
(    for \(unsigned int j = 0; j < a[i].size\(\); j++\) {)Tj
T*
(      cout << a[i][j];)Tj
T*
(    })Tj
T*
(    cout << '\\n';)Tj
T*
(  })Tj
T*
(})Tj
T*
T*
T*
(int main\(\))Tj
T*
({)Tj
T*
(  /* NOTE: the vector 'world' above corresponds to the contents)Tj
T*
(   * of ../res/tests/0.  TODO: apply the rules to the vector,)Tj
T*
(   * write the result to standard output, and compare with the)Tj
T*
(   * contents of ../tests/1. */)Tj
T*
(for \(size_t i=0; i<world.size\(\);i++\){)Tj
T*
(  for \(size_t j=0; j<world[i].size\(\);j++\){)Tj
T*
(    vector<vector<bool> >newworld; //intialize copy world)Tj
T*
(    newworld[i][j] = world[i][j]; //copy the old into new)Tj
T*
(    nbrCount\(i,j,world\); //im trying to apply the rules to the copy)Tj
T*
T*
(    display\(newworld\); //print)Tj
T*
(  })Tj
T*
(})Tj
T*
T*
ET
endstream
endobj
7 0 obj
<</Length 174>>
stream
BT 1 0 0 1 72 762 Tm
/F1 11 Tf 0.514 0.580 0.588 rg (  return 0;)Tj
0 -13.2 TD
(})Tj
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
T*
ET
endstream
endobj
8 0 obj
<</ProcSet[/PDF/Text]
/Font<</F1 1 0 R/F2 2 0 R/F3 3 0 R/F4 4 0 R>> >>
endobj
9 0 obj
<</Type/Page/Parent 12 0 R
/MediaBox[ 0 0 595 842]
/Contents 5 0 R
/Resources 8 0 R
>>
endobj
10 0 obj
<</Type/Page/Parent 12 0 R
/MediaBox[ 0 0 595 842]
/Contents 6 0 R
/Resources 8 0 R
>>
endobj
11 0 obj
<</Type/Page/Parent 12 0 R
/MediaBox[ 0 0 595 842]
/Contents 7 0 R
/Resources 8 0 R
>>
endobj
12 0 obj
<</Type/Pages/Kids[
9 0 R
10 0 R
11 0 R
]/Count 3
>>
endobj
13 0 obj
<</Type/Catalog/Pages 12 0 R >>
endobj
xref
0 14
0000000000 65535 f 
0000000015 00000 n 
0000000111 00000 n 
0000000212 00000 n 
0000000316 00000 n 
0000000424 00000 n 
0000002676 00000 n 
0000004384 00000 n 
0000004607 00000 n 
0000004693 00000 n 
0000004795 00000 n 
0000004898 00000 n 
0000005001 00000 n 
0000005070 00000 n 
trailer
<< /Size 14 /Root 13 0 R
>>
startxref
5118
%%EOF
