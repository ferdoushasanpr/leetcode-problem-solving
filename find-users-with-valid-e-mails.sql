#https://leetcode.com/problems/find-users-with-valid-e-mails/

# Write your MySQL query statement below
select user_id, name, mail from Users Where mail Regexp '^[A-Za-z][A-Za-z0-9._-]*@leetcode\\.com$'