// test

//* code-1
// clc 
// clear all
// A = [-1 1;1 1]; 
// B = [1;2]; 
// C = [1 2 0 0]; 
// sign = [0 0]; 
// s = eye(size(A,1)); 
// I = find(sign>0); 
// s(I,:) = -s(I,:); 
// M = [A s B]; 
// AA = array2table(M); 
// A1 = [A s] 
// disp('Standard form of the question is ') 
// AA.Properties.VariableNames(1:size(M,2)) = {'x1','x2','s1','s2','b'}
//  n = size(A1,2);
//  m = size(A1,1); 
// ncm = nchoosek(n,m) 
// pairs = nchoosek(1:n,m) %%m defining m no.of pairs at a time 
// sol = []; 
// if(n>m)  
// for i = 1:ncm     
// y = zeros(n,1);     
// xx = A1(:,pairs(i,:));     
// x = xx\B; 
//     if all(x>=0 & x~=inf & x~=-inf)        
//      y(pairs(i,:)) = x;     
//      sol = [sol y];     
// end  
// end 
// sol     
// else 
//         error('Equations are more than variables') 
// end 
// z=C*sol 
// [obj index]=max(z); 
// BFS=sol(:,index)

//^ code 2
// clc 
// clear all 
// %phase1
//       c = [3 2];
//       a = [2 4;3 5];    
//       b = [8; 15]; 
// %phase2 
// x = 0:1:max(b); 
// y1 = (b(1) - a(1,1).*x)/a(1,2); y1 = max(0,y1); 
// y2 = (b(2) - a(2,1).*x)/a(2,2); 
// y2 = max(0,y2); 
// plot(x,y1,'r',x,y2,'b')
//  %corner points
//  cx = find(x==0); 
// cy1 = find(y1==0); 
// cy2 = find(y2==0); 
// p1 = [x([cx cy1]);
// y1([cx cy1])]'; 
// p2 = [x([cx cy2]);
// y2([cx cy2])]';
//  p = [p1;p2]; 
// pp = unique(p,'rows') 

// %intersection points 
// X = [0;0]; 
// for i = 1:size(a,1) 
//            A1 = a(i,:);       
//            B1 = b(i); 
//     for j = 1+i:size(a,1) 
//         A2 = a(j,:); 
//         B2 = b(j); 
 
// AA	= [A1;A2]; 
// BB	= [B1;B2]; 
//         XX = AA\BB;         I = [XX X]'     end end 
// %all coener and intersection points 
// allpts = [pp;I]; 
// points = unique(allpts,'rows') 
 
//       %feasible region  
//         for i=1:size(points,1) 
// const1(i)=a(1,1)*points(i,1)+a(1,2)*points(i,2)-b(1); 
// const2(i)=a(2,1)*points(i,1)+a(2,2)*points(i,2)-b(2); 
// s1=find(const1>0); s2=find(const2>0); 
// end 
 
 
 
// S=unique([s1 s2]) points(S,:)=[] value=points*c' 
// table=[points value] 
 
// M = max(table(:,3)); 
// m = min(table(:,3)); 
 
// fprintf('Maximum value of given objective function is %d',M) 
// fprintf('\n Minimum value of given objective function is %d',m)

// ~ router code 
// 1. show ip interface brief
// 2. configure terminal
// 3. interface fa0/0
// 4. ip address <ip address of router> class type in 255.255.255.0 format
// 5. ping ip address of computer