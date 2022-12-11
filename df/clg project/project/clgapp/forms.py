from dataclasses import field
from django import forms
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.models import User

from .models import Customer


# Create your forms here.

class NewUserForm(UserCreationForm):
	email = forms.EmailField(required=True)

	class Meta:
		model = User
		fields = ("username", "email", "password1", "password2")

	def save(self, commit=True):
		user = super(NewUserForm, self).save(commit=False)
		user.email = self.cleaned_data['email']
		if commit:
			user.save()
		return user



class CustomerProfileForm(forms.ModelForm):
	class Meta:
		model =  Customer
		fields = ['name','locality','city','state','zipcode']
		widgets = {'name':forms.TextInput(attrs={'class':'form-control'}),
		'locality':forms.TextInput(attrs={'class':'form-control'}),
		'city':forms.TextInput(attrs={'class':'form-control'}),
		'state':forms.Select(attrs={'class':'form-control'}),
		'zipcode':forms.NumberInput(attrs={'class':'form-control'})}