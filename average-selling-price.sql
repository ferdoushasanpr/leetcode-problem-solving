#https://leetcode.com/problems/average-selling-price/

# Write your MySQL query statement below
select product_id, Round(Sum(p.price * us.units) / Sum(us.units), 2) as average_price from Prices as p Inner Join UnitsSold as us On p.product_id = us.product_id And us.purchase_date Between p.start_date And p.end_date Group by p.product_id