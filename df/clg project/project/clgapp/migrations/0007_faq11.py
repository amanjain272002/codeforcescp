# Generated by Django 4.0.6 on 2022-12-11 08:33

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('clgapp', '0006_customer_orderplaced'),
    ]

    operations = [
        migrations.CreateModel(
            name='faq11',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('email', models.EmailField(max_length=254)),
                ('Msg', models.CharField(max_length=300)),
            ],
        ),
    ]
