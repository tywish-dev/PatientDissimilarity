# Calculate Patient Dissimilarity

* Dissimilarity Formula = (r+s) / (q+r+s)

* r stands for number of times patient 1 has positive (+) and patient 2 has negative (-) test result.
* s stands for number of times patient 1 has negative (-) and patient 2 has positive (+) test result.
* q stands for number of times patient 1 has positive (+) and patient 2 has positive (+) test result.

* We assume these test results are aligned so for example index 0 in both patient's data is the same test.

* For Example:
* Patient 1 :  1  0  1  0  0
* Patient 2 :  1  1  0  0  0
  
* The result is q = 1, r = 1, s=1 therefore dissimilarity measure is 0.67.
