from django.contrib import admin
from clgapp.models import MenProduct
from clgapp.models import cart
from clgapp.models import Customer
from clgapp.models import OrderPlaced
from clgapp.models import faq11


# admin.site.register(MenProduct,MenProductAdmin)
@admin.register(MenProduct)
class MenProductAdmin(admin.ModelAdmin):
    list_display= ['id','name','price','description','pictures','category','title','paragraph']

@admin.register(cart)
class cartAdmin(admin.ModelAdmin):
    list_display= ['user','product','quantity']
# Register your models here.



@admin.register(Customer)
class CustomerAdmin(admin.ModelAdmin):
    list_display= ['id','user','name','locality','city','zipcode','state']


@admin.register(OrderPlaced)
class OrderPlaced(admin.ModelAdmin):
    list_display= ['id','user','customer','product','quantity','ordered_date','status']

@admin.register(faq11)
class faqadmin(admin.ModelAdmin):
    list_display = ["id","email","Msg" ]  