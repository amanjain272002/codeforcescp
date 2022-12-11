$(".plus-cart").click( function(){
    var id = $(this).attr("pid").toString();
    var eml = this.parentNode.children[2]
    $.ajax({
        type:"GET",
        url : "/pluscart",
        data:{
            prodid : id
        },
        success:function(data){
            eml.innerText = data.quantity
            document.querySelector("#amount").innerText = data.amount
            document.querySelector("#totalamount").innerText = data.totalamount
        }
    })
})


$(".minus-cart").click( function(){
    var id = $(this).attr("pid").toString();
    var eml = this.parentNode.children[2]
    $.ajax({
        type:"GET",
        url : "/minuscart",
        data:{
            prodid : id
        },
        success:function(data){
            eml.innerText = data.quantity
            document.querySelector("#amount").innerText = data.amount
            document.querySelector("#totalamount").innerText = data.totalamount
        }
    })
})


$(".remove-cart").click( function(){
    var id = $(this).attr("pid").toString();
    var eml = this
    $.ajax({
        type:"GET",
        url : "/removecart",
        data:{
            prodid : id
        },
        success:function(data){
            document.querySelector("#amount").innerText = data.amount
            document.querySelector("#totalamount").innerText = data.totalamount
            eml.parentNode.parentNode.parentNode.parentNode.remove()
        }
    })
})