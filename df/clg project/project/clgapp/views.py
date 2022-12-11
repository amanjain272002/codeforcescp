from itertools import product
from pickle import FALSE
from urllib import request
from django.http import HttpResponse
from django.views import View
from clgapp.models import MenProduct,Customer,OrderPlaced,faq11
from clgapp.models import cart
from django.shortcuts import  render, redirect
from .forms import NewUserForm,CustomerProfileForm
from django.contrib.auth import login
from django.contrib import messages
from django.contrib.auth import logout
from django.contrib.auth import login, authenticate
from django.contrib.auth.forms import AuthenticationForm
from django.http import JsonResponse
from django.db.models import Q



def home(request):
    return render(request,"index.html")

def men(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"men.html",data)

def women(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"women.html",data)

def add_to_cart(request):
    if request.user.is_authenticated:
        user = request.user
        product_id = request.GET.get('prod_id')
        product  = MenProduct.objects.get(id = product_id)
        cart(user=user , product=product).save()
        return redirect('/cart')
        
    else:
        return redirect('/login')

def detail1(request):
    if request.user.is_authenticated:
        user = request.user
        product_id = request.GET.get('prod_id')
        product  = MenProduct.objects.get(id = product_id)
        cart(user=user , product=product).save()
        print(product)
        product1=MenProduct.objects.filter(id=product_id)
        return render(request,"detail1.html",{'product':product1[0]})
    else:
        return redirect('/login')

def show_cart(request):
    if request.user.is_authenticated:
        user  = request.user
        Cart = cart.objects.filter(user = user)
        amount = 0.0
        shipping_amount = 20.00
        totalamount = 0.0
        cart_product = [p for p in cart.objects.all() if p.user == user]
        if cart_product:
            for p in cart_product:
                tempamount = (p.quantity*p.product.price)
                amount = amount + tempamount
                totalamount = amount + shipping_amount
            return render(request,"cart.html",{'carts':Cart,'totalamount':totalamount,'amount':amount})
        else:
            return render(request,"emptycart.html")



def detail(request,id):
    product=MenProduct.objects.filter(id=id)
    print(product[0])
    return render(request,"detailpage.html",{'product':product[0]})


def shesneaker(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"shesneaker.html",data)

def menformal(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"menformal.html",data)

def sneaker(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"sneaker.html",data)

def womenformal(request):
    menproduct = MenProduct.objects.all()
    data = {
        'menproduct':menproduct
    }
    return render(request,"womenformal.html",data)


def register_request(request):
	if request.method == "POST":
		form = NewUserForm(request.POST)
		if form.is_valid():
			user = form.save()
			login(request, user)
			messages.success(request, "Registration successful." )
			return redirect('/profile')
		messages.error(request, "Unsuccessful registration. Invalid information.")
	form = NewUserForm()
	return render (request=request, template_name="register.html", context={"register_form":form})


def login_request(request):
	if request.method == "POST":
		form = AuthenticationForm(request, data=request.POST)
		if form.is_valid():
			username = form.cleaned_data.get('username')
			password = form.cleaned_data.get('password')
			user = authenticate(username=username, password=password)
			if user is not None:
				login(request, user)
				messages.info(request, f"You are now logged in as {username}.")
				return render(request,"index.html")
			else:
				messages.error(request,"Invalid username or password.")
		else:
			messages.error(request,"Invalid username or password.")
	form = AuthenticationForm()
	return render(request,"login.html")


def logout_view(request):
    logout(request)
    return render(request,"index.html")

def plus_cart(request):
    if request.method == 'GET':
        prodid = request.GET['prodid']
        print(prodid)
        c = cart.objects.get(Q(product = prodid)& Q(user = request.user))
        c.quantity =c.quantity+1
        c.save()
        amount = 0
        shipping_amount = 20.0
        totalamount = 0
        cart_product = [p for p in cart.objects.all() if p.user == request.user]
       
        for p in cart_product:
            tempamount = (p.quantity*p.product.price)
            amount = amount + tempamount

       
        data = {
            'quantity':c.quantity,
            'amount':amount,
            'totalamount':amount + shipping_amount
        }
        return JsonResponse(data)


def minus_cart(request):
    if request.method == 'GET':
        prodid = request.GET['prodid']
        print(prodid)
        c = cart.objects.get(Q(product = prodid)& Q(user = request.user))
        c.quantity =c.quantity-1
        c.save()
        amount = 0
        shipping_amount = 20.0
        totalamount = 0
        cart_product = [p for p in cart.objects.all() if p.user == request.user]
       
        for p in cart_product:
            tempamount = (p.quantity*p.product.price)
            amount = amount + tempamount
         
        data = {
            'quantity':c.quantity,
            'amount':amount,
            'totalamount':amount + shipping_amount
        }
        return JsonResponse(data)


def remove_cart(request):
    if request.method == 'GET':
        prodid = request.GET['prodid']
        print(prodid)
        c = cart.objects.get(Q(product = prodid)& Q(user = request.user))

        c.delete()
        amount = 0
        shipping_amount = 20.0
        totalamount = 0
        cart_product = [p for p in cart.objects.all() if p.user == request.user]
       
        for p in cart_product:
            tempamount = (p.quantity*p.product.price)
            amount = amount + tempamount
       
        data = {
            'amount':amount,
            'totalamount':amount + shipping_amount
        }
        return JsonResponse(data)
    

def checkout(request):
    user = request.user
    add = Customer.objects.filter(user = user)
    cart_items = cart.objects.filter(user = user)
    amount = 0
    shipping_amount = 20.0
    totalamount = 0
    cart_product = [p for p in cart.objects.all() if p.user == request.user]
    if cart_product:
        for p in cart_product:
            tempamount = (p.quantity*p.product.price)
            amount = amount + tempamount

    totalamount = amount + shipping_amount
    return render(request,"checkout.html",{'add':add,'totalamount':totalamount,'cart_items':cart_items})


def payment_done(request):
    user = request.user
    custid = request.GET.get('custid')
    customer = Customer.objects.get(id = custid)
    Cart = cart.objects.filter(user = user)
    for c in Cart :
        OrderPlaced(user = user,customer = customer,product = c.product, quantity = c.quantity).save()
        c.delete()
    return redirect('orders')

def orders(request):
    op = OrderPlaced.objects.filter(user = request.user)
    return render(request, "orders.html",{'order_placed':op})




def fgpassword(request):
    return render(request,"fgpassword.html")

class ProfileView(View):
    def get(self,request):
        form = CustomerProfileForm()
        return render(request,"profile.html",{'form':form,'active':'btn-primary'})
    
    def post(self,request):
        form = CustomerProfileForm(request.POST)
        if form.is_valid():
            user = request.user
            name = form.cleaned_data['name']
            locality = form.cleaned_data['locality']
            city = form.cleaned_data['city']
            state = form.cleaned_data['state']
            zipcode = form.cleaned_data['zipcode']
            reg = Customer(user = user,name = name,locality=locality,city = city,state = state,zipcode = zipcode)
            reg.save()
            messages.success(request,'Congratulations!! Profile Registered Successfully')
        return render(request,"profile.html",{'form':form,'active':'btn-primary'})




def address(request):
    add = Customer.objects.filter(user = request.user) 
    return render(request,"address.html",{'add':add,'active':'btn-primary'})


def faq(request):
    return render(request,"faq.html")


def faqfetch(request):
    if request.method == "POST":
        email=request.POST['email']
        message=request.POST['message']
        myuser=faq11(Msg=message,email=email)
        myuser.save()
    return render(request,"faq.html")