from email.mime import image
from email.policy import default
from random import choices
from unittest.util import _MAX_LENGTH
from django.db import models
from django.contrib.auth.models import User
from django.core.validators import MaxValueValidator,MinValueValidator

# Create your models here.
class MenProduct(models.Model):
    id=models.AutoField
    category = models.CharField(max_length = 50,default='')
    paragraph = models.TextField(default='')
    title = models.CharField(max_length = 50,default='')
    name = models.CharField(max_length = 50)
    price = models.IntegerField(default = 0)
    description = models.CharField(max_length =200,default='')
    pictures = models.ImageField(max_length=255,upload_to = 'pictures/',null=True,blank = True)
    


class cart(models.Model):
    user=models.ForeignKey(User, on_delete=models.CASCADE,default=1)
    product=models.ForeignKey(MenProduct, on_delete=models.CASCADE)
    quantity=models.PositiveIntegerField(default=1)

    def __str__(self):
        return str(self.id)

    @property
    def total_cost(self):
        return self.quantity * self.product.price


STATE_CHOICES = (
    ('Andhra Pradesh','Andhra Pradesh'),
    ('Arunachal Pradesh','Arunachal Pradesh'),
    ('Assam','Assam'),
    ('Bihar','Bihar'),
    ('Chhattisgarh','Chhattisgarh'),
    ('Goa','Goa'),
    ('Gujarat','Gujarat'),
    ('Haryana','Haryana'),
    ('Himachal Pradesh','Himachal Pradesh'),
    ('Jharkhand','Jharkhand'),
    ('Karnataka','Karnataka'),
    ('Kerala','Kerala'),
    ('Madhya Pradesh','Madhya Pradesh'),
    ('Maharashtra','Maharashtra'),
    ('Manipur','Manipur'),
    ('Meghalaya','Meghalaya'),
    ('Mizoram','Mizoram'),
    ('Nagaland','Nagaland'),
    ('Odisha','Odisha'),
    ('Punjab','Punjab'),
    ('Rajasthan','Rajasthan'),
    ('Sikkim','Sikkim'),
    ('Tamil Nadu','Tamil Nadu'),
    ('Telangana','Telangana'),
    ('Tripura','Tripura'),
    ('Uttar Pradesh','Uttar Pradesh'),
    ('Uttarakhand','Uttarakhand'),
    ('West Bengal','West Bengal'),
    ('Andaman and Nicobar Islands','Andaman and Nicobar Islands'),
    ('Chandigarh','Chandigarh'),
    ('Dadra & Nagar Haveli ','Dadra & Nagar Haveli '),
    ('Daman & Diu','Daman & Diu'),
    ('Delhi','Delhi'),
    ('Jammu and Kashmir','Jammu and Kashmir'),
    ('Lakshadweep','Lakshadweep'),
    ('Puducherry','Puducherry'),
    ('Ladakh','Ladakh'),
)


class Customer(models.Model):
    # id=models.AutoField
    user = models.ForeignKey(User,on_delete = models.CASCADE)
    name = models.CharField(max_length = 200)
    locality = models.CharField(max_length = 200)
    city = models.CharField(max_length = 50)
    zipcode = models.IntegerField()
    state = models.CharField(choices = STATE_CHOICES,max_length = 50)

    def _str_(self):
        return str(self.id)


STATUS_CHOICES = (
    ('Accepted','Accepted'),
    ('Packed','Packed'),
    ('On The Way','On The Way'),
    ('Delivered','Delivered'),
    ('Cancel','Cancel'),
)


class OrderPlaced(models.Model):
    user = models.ForeignKey(User,on_delete = models.CASCADE)
    customer = models.ForeignKey(Customer ,on_delete = models.CASCADE)
    product = models.ForeignKey(MenProduct,on_delete = models.CASCADE)
    quantity = models.PositiveIntegerField(default=1)
    ordered_date = models.DateTimeField(auto_now_add = True)
    status = models.CharField(max_length = 50,choices = STATUS_CHOICES,default='Pending')

    @property
    def total_cost(self):
        return self.quantity * self.product.price


class faq11(models.Model):
    email = models.EmailField()
    Msg = models.CharField(max_length=300)